/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
** Proyecto Reinas
** Fecha creación : 21 / 07 / 2021
** Fecha de modificación : 24 / 07 / 2021
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

