/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Funciones Trigonometricas
Fecha creación: 04/06/2021
Fecha de modificación: 06/06/2021 */

#include "Operation.h"
#include <math.h>
#include "Datum.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operation::factorial(int n)
// Purpose:    Implementation of Operation::factorial()
// Parameters:
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////


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

////////////////////////////////////////////////////////////////////////
// Name:       Operation::seno(int x, int n)
// Purpose:    Implementation of Operation::seno()
// Parameters:
// - x
// - n
// Return:     double
////////////////////////////////////////////////////////////////////////

double Operation::coseno(Datum d, int n)
{
    if (n == 0)
        return 1;
    else
    {
        return pow(-1, n) * pow(d.getDatum(),2*n) / factorial(2 * n) + coseno(d.getDatum(), n - 1);
    }
}
