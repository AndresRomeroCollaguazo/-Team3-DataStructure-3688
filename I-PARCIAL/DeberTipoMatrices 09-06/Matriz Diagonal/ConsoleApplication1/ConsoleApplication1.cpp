/*Universidad de las Fuerzas Armadas "ESPE"
Ing. de Software
Autor: P�rez H�milton
Deber de Matriz Diagonal
Fecha creaci�n : 06 / 06 / 2021
Fecha de modificaci�n : 08 / 06 / 2021 */
#include <iostream>
#include <stdlib.h>
#include "Matrix.h"
#include "Operations.h"


using namespace std;

int main()
{
    int n;
    cout << "Ingresa las Dimensiones de la matriz a diagonalizar X: \n";
    cin >> n;
    Matrix **matriz[15][15];
    Operations mat;
    

    cout << "\nTu Matriz diagonal Random X es: \n" << endl;
    mat.matrixDrandom(n);

    cout << "\nTu Matriz diagonal X es: \n" << endl;
    mat.matrix1Di(n);


}