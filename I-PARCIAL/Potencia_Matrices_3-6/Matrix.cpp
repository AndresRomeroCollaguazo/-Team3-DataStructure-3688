
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
Matrix::Matrix(int** _matrix,int _dim)
{
   this->matrix=_matrix;
   this->dim = _dim;

}



Matrix::~Matrix()
{
   // TODO : implement
}