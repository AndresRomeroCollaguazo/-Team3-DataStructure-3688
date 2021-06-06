

#include <iostream>
#include "Datum.h"
#include "Operation.h"
using namespace std;
int main()
{
    int n=5;
    double x;
    cout << "Ingrese el valor de x de la funcion cos(x) -> ";
    cin >> x;
    Datum d1(x);
    Operation op;
    cout << "El resultado de coseno de x es -> ";
    cout << op.coseno(d1, n) << endl;
   
}

