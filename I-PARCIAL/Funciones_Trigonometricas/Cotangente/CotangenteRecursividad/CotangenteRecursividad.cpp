/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Funciones Trigonometricas
Fecha creación: 04/06/2021
Fecha de modificación: 06/06/2021 */

#include <iostream>
#include "Datum.h"
#include "Operation.h"

using namespace std;
int main()
{
    int n;
    cout << "Ingrese el valor del factorial:  ";
    cin >> n;
    double x;
    cout << "Ingrese el valor de x en rad:  ";
    cin >> x;
    Datum d1(x);
    Operation op;
    cout << "El resultado de la cotangente de x es -> \n";
    cout << op.cotangente(op,d1,n) << endl;

}

