/*Universidad de las Fuerzas Armadas "ESPE"
Ing. de Software
Autor: P�rez H�milton
Deber de Matriz Diagonal
Fecha creaci�n : 06 / 06 / 2021
Fecha de modificaci�n : 08 / 06 / 2021 */

#include "Matrix.h"


int** Matrix::getMatrix(void)
{
	return matrix;
}


void Matrix::setMatrix(int** newMatrix)
{
	matrix = newMatrix;
}

int Matrix::getDim(void) {
	return this->dim;
}

void Matrix::setDim(int dim) {
	this->dim = dim;
}
Matrix::Matrix(int** _matrix, int _dim)
{
	this->matrix = _matrix;
	this->dim = _dim;

}



Matrix::~Matrix()
{
	// TODO : implement
}