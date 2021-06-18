/*Universidad de las Fuerzas Armadas "ESPE"
Ing. de Software
Autor: Pérez Hámilton
Deber de Matriz Diagonal
Fecha creación : 06 / 06 / 2021
Fecha de modificación : 08 / 06 / 2021 */
#include <iostream>
#include <stdlib.h>
#include "Matrix.h"
#include "Operations.h"
#include "Validate.h"
#pragma warning(disable : 4996)

using namespace std;

int main()
{
    char cad[10];
    Validate v;
    int n;
    strcpy(cad,v.ingresar("Ingresa las Dimensiones de la matriz a diagonalizar X: \n"));
    n=atoi(cad);
    Matrix** matriz[15][15];
    Operations mat;

    cout << "\nTu Matriz diagonal Random X es: \n" << endl;
    mat.matrixDrandom(n);

    cout << "\nTu Matriz diagonal X es: \n" << endl;
    mat.matrix1Di(n);

}