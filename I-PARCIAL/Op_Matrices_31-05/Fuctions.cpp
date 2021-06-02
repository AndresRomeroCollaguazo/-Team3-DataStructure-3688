/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Multiplicacion de matrices
Fecha creación: 31/05/2021
Fecha de modificación: 01/06/2021 */

/***********************************************************************
 * Module:  Fuctions.cpp
 * Author:  avand
 * Modified: lunes, 31 de mayo de 2021 18:14:39
 * Purpose: Implementation of the class Fuctions
 ***********************************************************************/

#include "Matrix.h"
#include "Fuctions.h"
#include <iostream>
using namespace std;
class Matrix;
////////////////////////////////////////////////////////////////////////
// Name:       Fuctions::multiplication(Matrix m1, Matrix m2)
// Purpose:    Implementation of Fuctions::multiplication()
// Parameters:
// - m1
// - m2
// Return:     void
////////////////////////////////////////////////////////////////////////

int** Fuctions::multiplication(Matrix& m1, Matrix& m2,int _fila1,int _columna1,int _columna2)
{

    int** product = new int* [_fila1];
    for (int i = 0; i < _fila1; i++) {
        product[i] = new int[_columna2];
    }

    for (int a = 0; a < _fila1; a++)
    {
        for (int b = 0; b < _columna2; b++)
        {
            int producto = 0;
            for (int c = 0; c < _columna1; c++)
            {
                producto += m1.getMatrix(a, c) * m2.getMatrix(c, b);
            }

            product[a][b] = producto;
        }
    }
    return product;
}

void Fuctions::imprimir(Matrix& m1,int _fila,int _columna) {
    for (int i = 0; i < _fila; i++)
    {
        cout << " " << endl;
        for (int j = 0; j < _columna; j++)
        {
            cout << "|";
            cout << m1.getMatrix(i, j);

        }cout << "|" << endl;
    }
}

void Fuctions::llenarMatriz(int _fila, int _columna,int ** _matriz)
{
    int b;
    for (int l = 0; l < _fila; l++) {
        for (int m = 0; m < _columna; m++) {
            cout << "Ingrese el valor [" << l << "][" << m << "] de la matriz" << endl;
            cin >> b;
            _matriz [l][m] = b;
        }
    }
}

int Fuctions::verificar(int _columna1,int _fila2) {
    if (_columna1 == _fila2) {
        return 1;
    }
    else {
        cout << "Numero de columas de la primera matriz no es igual al numero de filas de la segunda matriz" << endl;
        exit(-1);
    }

}
////////////////////////////////////////////////////////////////////////
// Name:       Fuctions::multiplication(Matrix m1, Matrix m2)
// Purpose:    Implementation of Fuctions::multiplication()
// Parameters:
// - m1
// - m2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fuctions::multiplication(Matrix& m1, Matrix& m2)
{
   // TODO : implement
}
