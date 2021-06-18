/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Multiplicacion de matrices
Fecha creación: 31/05/2021
Fecha de modificación: 01/06/2021 */

#include "Fuctions.h"
#include "Matrix.h"
#include <iostream>
#include "Validate.h"
#include <string.h>
#pragma warning(disable : 4996)
using namespace std;

int main(){

    int row1,column1,row2,column2;
   
   
   
    cout << "                        PROGRAMA DE MULTIPLICACION DE MATRICES N*N" << endl;
    char cad[10];
    char cad1[10];
    char cad2[10];
    char cad3[10];
    Fuctions funcion;
    Validate v;
    
    strcpy(cad, v.ingresar("\nIngrese el numero de filas de la primera matriz -> "));
    row1 = atoi(cad);
    strcpy(cad1, v.ingresar("\nIngrese el numero de columnas de la primera matriz -> "));
    column1 = atoi(cad1);
    strcpy(cad2, v.ingresar("\nIngrese el numero de filas de la segunda matriz -> "));
    row2 = atoi(cad2);
    strcpy(cad3, v.ingresar("\nIngrese el numero de columnas de la segunda matriz -> "));
    column2 = atoi(cad3);
    


    int** m1 = new int* [row1];
    for (int i = 0; i < row1; i++) {
         m1[i] = new int[column1];
    }

    funcion.verify(column1,row2);

    cout << "\nPRIMERA MATRIZ" << endl;

    funcion.fill_Matrix(row1,column1,m1);


    int** m2 = new int* [row2];
    for (int l = 0; l < row2; l++) {
    m2[l] = new int[column2];
    }

    cout << "\nSEGUNDA MATRIZ" << endl;

    funcion.fill_Matrix(row2,column2,m2);


    Matrix _matriz(m1,row1,column1);
    Matrix _matriz2(m2,row2,column2);

   int** m3 = new int* [row1];
   for (int r = 0; r < row1; r++) {
   m3[r] = new int[column2];
   }

   m3=funcion.multiplication(_matriz, _matriz2,row1,column1,column2);

    Matrix _matriz3(m3,row1,column2);

    cout << "\nRESULTADO DEL PRODUCTO" << endl;

    funcion.print(_matriz3,row1,column2);

     
}
