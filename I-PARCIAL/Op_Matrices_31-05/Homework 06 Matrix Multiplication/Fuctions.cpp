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
 * Modified: martes, 1 de junio de 2021 17:42:10
 * Purpose: Implementation of the class Fuctions
 ***********************************************************************/

#include "Matrix.h"
#include "Fuctions.h"
#include <iostream>
#include "Validate.h"
#pragma warning(disable : 4996)
using namespace std;
 ////////////////////////////////////////////////////////////////////////
 // Name:       Fuctions::multiplication(Matrix m1, Matrix m2, int row1, int column1, int column2)
 // Purpose:    Implementation of Fuctions::multiplication()
 // Parameters:
 // - m1
 // - m2
 // - row1
 // - column1
 // - column2
 // Return:     int**
 ////////////////////////////////////////////////////////////////////////

int** Fuctions::multiplication(Matrix m1, Matrix m2, int row1, int column1, int column2)
{
    int** product = new int* [row1];
    for (int i = 0; i < row1; i++) {
        product[i] = new int[column2];
    }

    for (int a = 0; a < row1; a++)
    {
        for (int b = 0; b < column2; b++)
        {
            int sum = 0;
            for (int c = 0; c < column1; c++)
            {
                sum += m1.rove_Matrix(a, c) * m2.rove_Matrix(c, b);
            }

            product[a][b] = sum;
        }
    }
    return product;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fuctions::print(Matrix m1, int row, int column)
// Purpose:    Implementation of Fuctions::print()
// Parameters:
// - m1
// - row
// - column
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fuctions::print(Matrix m1, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        cout << " " << endl;
        for (int j = 0; j < column; j++)
        {
            cout << "|";
            cout << m1.rove_Matrix(i, j);

        }cout << "|" << endl;
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Fuctions::fill_Matrix(int row, int column, int** m1)
// Purpose:    Implementation of Fuctions::fill_Matrix()
// Parameters:
// - row
// - column
// - m1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fuctions::fill_Matrix(int row, int column, int** m1)
{
    int b;
    char cad[10];
    Validate v;
    for (int l = 0; l < row; l++) {
        for (int m = 0; m < column; m++) {
            cout << "\nIngrese el valor [" << l << "][" << m << "] de la matriz" << endl;
    
            strcpy(cad, v.ingresar(""));
            b = atoi(cad);
            m1[l][m] = b;
        }
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Fuctions::verify(int column1, int row2)
// Purpose:    Implementation of Fuctions::verify()
// Parameters:
// - column1
// - row2
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fuctions::verify(int column1, int row2)
{
    if (column1 == row2) {
        return 1;
    }
    else {
        cout << "Numero de columas de la primera matriz no es igual al numero de filas de la segunda matriz" << endl;
        exit(-1);
    }
}
