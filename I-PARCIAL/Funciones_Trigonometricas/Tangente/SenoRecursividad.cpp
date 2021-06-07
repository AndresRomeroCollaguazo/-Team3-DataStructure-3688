/ *Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Funciones Trigonometricas
Fecha creación : 06 / 04 / 2021
Fecha de modificación : 06 / 06 / 2021 * /


#include <iostream>
#include"Datum.h"
#include"Operation.h"
using namespace std;

int main()
{
    int n = 5;
    double x;
    cout << "Ingrese el valor de x de la funcion tan(x): ";
    cin >> x;
    Datum dat(x);
    Operation op;
    cout << "Tan de x es: ";
    cout <<op.tan(dat,n)<< endl;
    
    return 0;
}
