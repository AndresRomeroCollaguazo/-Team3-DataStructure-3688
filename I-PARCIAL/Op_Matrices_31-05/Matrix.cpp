/***********************************************************************
 * Module:  Matrix.cpp
 * Author:  avand
 * Modified: lunes, 31 de mayo de 2021 18:14:39
 * Purpose: Implementation of the class Matrix
 ***********************************************************************/

#include "Matrix.h"

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::getMatrix()
// Purpose:    Implementation of Matrix::getMatrix()
// Return:     int[]
////////////////////////////////////////////////////////////////////////

int** Matrix::getMatrix(void)
{
   return this->matrix;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::setMatrix(int[] newMatrix)
// Purpose:    Implementation of Matrix::setMatrix()
// Parameters:
// - newMatrix
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matrix::setMatrix(int newMatrix[][10] )
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			this->matrix[i][j] = newMatrix[i][j];
			
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::Matrix(int [][] _matrix)
// Purpose:    Implementation of Matrix::Matrix()
// Parameters:
// - _matrix
// Return:     
////////////////////////////////////////////////////////////////////////

Matrix::Matrix(int _matrix[][10] )
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			this->matrix[i][j] = _matrix[i][j];

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
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::enter_matrix(int[][] m1)
// Purpose:    Implementation of Matrix::enter_matrix()
// Parameters:
// - m1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matrix::enter_matrix(int m1[][10] )
{
   // TODO : implement
}