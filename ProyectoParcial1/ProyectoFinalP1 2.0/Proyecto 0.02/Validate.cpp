#include "Validate.h"
#include<conio.h>
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

double Validate::validate_L() {

    char* datos = new char[10];
    int i = 0;
    double j;
    char c;
    while ((c = _getch()) != 13) {
        if (c >= '0' && c <= '9') {
            cout << c;
            *(datos + i++) = c;
        }
        else if (c == 46) {
            cout << c;
            if (datos == NULL) {
                cout << "No se a ingresado ningun valor, vuelva a intentarlo" << endl;
                validate_L();
            }
            else {
                j = atof(datos);
                return j;
            }
        }
    }
}

double Validate::validate_R() {
    char* datos = new char[10];
    int i = 0;
    double j;
    char c;
    while ((c = _getch()) != 13) {
        if (c >= '0' && c <= '9') {
            cout << c;
            *(datos + i++) = c;
        }
    }
    j = atof(datos);
    return j;
}

double Validate::select_Validate() {
    int a;
    cout << "¿Desea ingresar un entero o un decimal?" << endl;
    cout << "1. Entero" << endl;
    cout << "2. Decimal" << endl;
    cout << "\nDigite su opcion -> ";
    cin >> a;
    switch (a) {
    case 1: {
        double value1;
        cout << "\nIngrese su numero entero -> ";
        value1 = validate_R();
        return value1;
        _getch(); break;
    }
    case 2: {
        int value1, value2, value3;
        float value4;
        int contador = 0;
        cout << "\nIngrese su numero decimal -> ";
        value1 = validate_L();
        value2 = validate_R();
        value3 = value2;
        while (value2 / 10 > 0)
        {
            value2 = value2 / 10;
            contador++;
        }
        double p = pow(10, contador + 1);
        value4 = (value3 / p);
        return value1 + value4;
        _getch(); break;
    }
    default: {
        cout << "Ingrese un valor correcto" << endl;
    }
    }
}