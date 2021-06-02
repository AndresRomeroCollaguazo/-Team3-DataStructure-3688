

#include "Fuctions.h"
#include "Matrix.h"
#include <iostream>

using namespace std;

int main(){

    int row1,column1,row2,column2;
    Fuctions funcion;

    cout << "Ingrese el numero de filas de la primera matriz" << endl;
    cin >> row1 ;
    cout << "Ingrese el numero de columnas de la primera matriz" << endl;
    cin >> column1;

    cout << "Ingrese el numero de filas de la segunda matriz" << endl;
    cin >> row2;
    cout << "Ingrese el numero de columnas de la segunda matriz" << endl;
    cin >> column2;

    int** m1 = new int* [row1];
    for (int i = 0; i < row1; i++) {
         m1[i] = new int[column1];
    }

    funcion.verify(column1,row2);

    cout << "PRIMERA MATRIZ" << endl;

    funcion.fill_Matrix(row1,column1,m1);


    int** m2 = new int* [row2];
    for (int l = 0; l < row2; l++) {
    m2[l] = new int[column2];
    }

    cout << "SEGUNDA MATRIZ" << endl;

    funcion.fill_Matrix(row2,column2,m2);


    Matrix _matriz(m1,row1,column1);
    Matrix _matriz2(m2,row2,column2);

   int** m3 = new int* [row1];
   for (int r = 0; r < row1; r++) {
   m3[r] = new int[column2];
   }

   m3=funcion.multiplication(_matriz, _matriz2,row1,column1,column2);

    Matrix _matriz3(m3,row1,column2);

    cout << "RESULTADO DEL PRODUCTO" << endl;

    funcion.print(_matriz3,row1,column2);

       return 0;
}
