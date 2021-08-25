/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
** Proyecto Reinas
** Fecha creaci�n : 21 / 07 / 2021
** Fecha de modificaci�n : 24 / 07 / 2021
*********************************************************************************************/
#include "Ingreso.h"
#include <iostream>
#include <conio.h>
#pragma warning(disable : 4996)
using namespace std;

int Ingreso::ingreso(){
    int nreinas = 0;
    do{
        cout << "Ingrese el numero de reinas a calcular (entre 3 - 12)" << endl;
        nreinas = validateInt();
        cout << endl;
    }while( nreinas < 3 || nreinas > 12);
    return nreinas;
}

int Ingreso::validateInt(){
    std::string cad = "";
    int num = 0;
    char c = ' ';
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            cout << c;
            cad+= c; 
        }
    }
    num = atoi(cad.c_str());
    return num;
}