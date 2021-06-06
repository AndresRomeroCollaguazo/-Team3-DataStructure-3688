/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Funciones Trigonometricas
Fecha creaci�n: 04/06/2021
Fecha de modificaci�n: 06/06/2021 */
#include"Operation.h"
#include<math.h>
#include"Datum.h"
int Operation:: factorial(int n) {
    if (n < 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
double Operation::seno(Datum d, int n) {

    if (n == 0)
        return d.getDatum();
    else
    {
        return pow(-1, n) * pow(d.getDatum(),2 * n + 1) / factorial(2 * n + 1) + seno(d.getDatum(), n - 1);
    }
}
