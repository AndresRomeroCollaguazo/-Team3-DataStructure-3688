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
#include "Reinas.h"
using namespace std;

bool Reinas::comprobar(int fila)
{
    int i;
    for (i = 0; i < fila; i++)
        if (( *( reinas + i ) == * ( reinas + fila) ) 
            || (abs(fila - i) == abs( *( reinas + fila ) - *( reinas + i ))))
            return false;

    return true;
}



void Reinas::mostrarTablero(int k)
{
    system("CLS");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ( *( reinas + i ) == j){
                cout<<"|" <<"  ";
            }
            else{
                cout<<"|" << "\333\333";
            }
        }
        cout<<"Coordenada de la Reina ("<< (*( reinas + i )) + 1<<" "<< ( i ) + 1 <<")\n";
        for(int a = 0 ; a < n ; a++){
            cout << "---";
        }
        cout << "\n";
    }
    cout<<endl;
    cout << "Solucion No : " << cont << "\n";
}




void Reinas::colocarReina(int fila)
{
    if (fila < n) {
        for ( *( reinas + fila ) = 0; *( reinas + fila ) < n; (*( reinas + fila))++) {
            if (comprobar(fila)) {
                mostrarTablero( 0);
                colocarReina(fila + 1);
            }
        }
    }
    else {
        cont++;
        mostrarTablero( 0);
        system("Pause");
    }

}

Reinas::Reinas(int* _mat , int _n ){
    reinas = _mat;
    n = _n ;
}

void Reinas::mostrarSolucionFinal(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ( *( reinas + i ) == j){
                cout<<"\333\333";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"Coordenada de la Reina ("<< (*( reinas + i )) + 1<<" "<< ( i ) + 1 <<")\n";
    }
    //system("PAUSE");
    }

