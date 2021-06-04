/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Potencia de matrices
Fecha creación: 02/06/2021
Fecha de modificación: 03/06/2021 */
/***********************************************************************
 * Module:  Fuctions.cpp
 * Author:  avand
 * Modified: miércoles, 2 de junio de 2021 16:01:36
 * Purpose: Implementation of the class Fuctions
 ***********************************************************************/

#include "Fuctions.h"
#include <iostream>
#include <Math.h>
#include <cmath>
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Fuctions::wax(int** matrix, int dim)
// Purpose:    Implementation of Fuctions::wax()
// Parameters:
// - matrix
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fuctions::wax(Matrix& m1)
{
	int i, j;
	int** matrix = m1.getMatrix();
	for (i = 0; i < m1.getDim(); i++)
	{
		for (j = 0; j < m1.getDim(); j++)
		{
			*(*(matrix + i) + j) = 0;//encera por filas
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Fuctions::segment(int dim)
// Purpose:    Implementation of Fuctions::segment()
// Parameters:
// - dim
// Return:     int**
////////////////////////////////////////////////////////////////////////

void Fuctions::segment(Matrix& m1)
{
	int** matrix = m1.getMatrix();
	int	 i;
	matrix = (int**)malloc(m1.getDim() * sizeof(int*));
	for (i = 0; i < m1.getDim(); i++)
	{
		*(matrix + i) = (int*)malloc(m1.getDim() * sizeof(int));//simulando arreglo unidimencional segmentar mediante puntero
	}
	m1.setMatrix(matrix);
}

////////////////////////////////////////////////////////////////////////
// Name:       Fuctions::fill(int** matrix, int dim)
// Purpose:    Implementation of Fuctions::fill()
// Parameters:
// - matrix
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fuctions::fill(Matrix& m1, int dim)
{
	int i, j;
	int** matrix = m1.getMatrix();
	for (i = 0; i < dim; i++)
	{
		for (j = 0; j < dim; j++)
		{
			cout << "Ingrese el valor [" << i << "][" << j << "] -> ";
			cin>>*(*(matrix + i) + j);
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Fuctions::calculate(int** matrix1, int** matrix2, int** matrxi3, int dim)
// Purpose:    Implementation of Fuctions::calculate()
// Parameters:
// - matrix1
// - matrix2
// - matrxi3
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fuctions::calculate(Matrix& m1, Matrix& mr, int dim, int num)
{
	int** matrix1 = m1.getMatrix();
	
	int** matrixr = mr.getMatrix();
	int i, j, k,l;
		
		for (i = 0; i < dim; i++)
		{
			for (j = 0; j < dim; j++)
			{
				for (k = 0; k < dim; k++)
				{
					*(*(matrixr + i) + j) +=  ((*(*(matrix1 + i) + k)) * (*(*(matrix1 + k) + j)));
						
					
				}
				 
			}
		}

		cout << endl;
}


////////////////////////////////////////////////////////////////////////
// Name:       Fuctions::print(int** matrix, int dim)
// Purpose:    Implementation of Fuctions::print()
// Parameters:
// - matrix
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fuctions::print(Matrix& m1)
{
	int** matrix = m1.getMatrix();
	int i, j;
	for (i = 0; i < m1.getDim(); i++)
	{
		for (j = 0; j < m1.getDim(); j++)
		{
			cout<<*(*(matrix + i) + j)<<"   ";
			
		}
		cout << "" << endl;
	}
}

int** Fuctions::multiplication(Matrix& m, Matrix& m1, Matrix& mr)
{
	int** matrixr = mr.getMatrix();
	int** matrix1 = m.getMatrix();
	int** matrix2 = m1.getMatrix();
	
	for (int y = 0; y < m.getDim(); ++y)
	{
		for (int x = 0; x <m.getDim(); ++x)
		{
			int value = 0;

			for (int cell = 0; cell < m.getDim(); ++cell)
			{
				value += ((*(*(matrix1 + cell) + y)) * (*(*(matrix2 + x) + cell)));
			}

			(*(*(matrixr + x) + y)) = value;
			
		}
	}
	
	return matrixr;
}

void Fuctions::powM(Matrix& m, Matrix& m1, int p)
{
	int** matrixr = m.getMatrix();
	Matrix r(matrixr, m.getDim());
	Fuctions f;
	for (int i = 1; i < p+1; i++)
	{
		m1.setMatrix(f.multiplication(r, m, m1));
		cout << i ;
	}
	
	
}
