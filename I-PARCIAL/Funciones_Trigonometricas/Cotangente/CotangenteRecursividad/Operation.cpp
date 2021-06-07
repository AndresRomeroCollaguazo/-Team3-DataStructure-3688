/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Funciones Trigonometricas
Fecha creaci�n: 04/06/2021
Fecha de modificaci�n: 06/06/2021 */

#include "Operation.h"
#include <math.h>
#include "Datum.h"


int Operation::factorial(int n)
{
    if (n < 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}



double Operation::coseno(Datum d, int n)
{
    // Series Coseno de Maclaurin
    if (n == 0)
        return 1;
    else
    {
        return (pow(-1,n) * pow(d.getDatum(), (2*n)) / factorial(2 * n));
    }
}

double Operation::cotangente(Operation c, Datum d, int n)
{

    if (n == 0)
        return 1;
    else
    {
        return c.coseno(d.getDatum(), n - 1) / sqrt(1-pow(c.coseno(d.getDatum(), n - 1),2));
    };
}