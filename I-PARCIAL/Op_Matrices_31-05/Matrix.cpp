/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Multiplicacion de matrices
Fecha creación: 31/05/2021
Fecha de modificación: 01/06/2021 */

/***********************************************************************
 * Module:  Matrix.cpp
 * Author:  avand
 * Modified: martes, 1 de junio de 2021 17:39:08
 * Purpose: Implementation of the class Matrix
 ***********************************************************************/

#include "Matrix.h"

 ////////////////////////////////////////////////////////////////////////
 // Name:       Matrix::setMatrix(int[] newMatrix)
 // Purpose:    Implementation of Matrix::setMatrix()
 // Parameters:
 // - newMatrix
 // Return:     void
 ////////////////////////////////////////////////////////////////////////

void Matrix::setMatrix(int newMatrix)
{
	matrix[10][10] = newMatrix;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::Matrix(int ** _matrix, int _row, int _column)
// Purpose:    Implementation of Matrix::Matrix()
// Parameters:
// - _matrix
// - _row
// - _column
// Return:     
////////////////////////////////////////////////////////////////////////

Matrix::Matrix(int** _matrix, int _row, int _column)
{
	this->row = _row;
	this->column = _column;
	for (int i = 0; i < _row; i++)
	{
		for (int j = 0; j < _column; j++)
		{
			*&matrix[i][j] = _matrix[i][j];

		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::~Matrix()
// Purpose:    Implementation of Matrix::~Matrix()
// Return:     
////////////////////////////////////////////////////////////////////////

Matrix::~Matrix()
{
	
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::rove_Matrix(int i, int j)
// Purpose:    Implementation of Matrix::rove_Matrix()
// Parameters:
// - i
// - j
// Return:     int
////////////////////////////////////////////////////////////////////////

int Matrix::rove_Matrix(int i, int j)
{
	return matrix[i][j];
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::getMatrix()
// Purpose:    Implementation of Matrix::getMatrix()
// Return:     int[]
////////////////////////////////////////////////////////////////////////

int Matrix::getMatrix(void)
{
	return matrix[10][10];
}
