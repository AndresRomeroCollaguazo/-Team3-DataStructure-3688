  
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Potencia de matrices
Fecha creación: 02/06/2021
Fecha de modificación: 03/06/2021 */

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
