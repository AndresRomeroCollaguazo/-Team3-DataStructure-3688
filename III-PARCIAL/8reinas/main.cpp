/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
** Proyecto Reinas
** Fecha creaci�n : 21 / 07 / 2021
** Fecha de modificaci�n : 24 / 07 / 2021
*********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#pragma warning(disable : 4996)
#include <windows.h>
#include <string>
#include "Ingreso.h"
#include "Reinas.h"
using namespace std;

int main()
{
    int* reinas; 
    int nreinas; 
    int i; 
    Ingreso in;

    nreinas = in.ingreso();

    reinas = new int[nreinas];
    for (i = 0; i < nreinas; i++){
        *( reinas + i ) = -1;
    }

    Reinas r( reinas , nreinas);
    
        r.colocarReina(0);
        free(reinas);
    system("CLS");
    cout << "No existen mas soluciones" ;
    //r.mostrarSolucionFinal();

    return 0;
}

