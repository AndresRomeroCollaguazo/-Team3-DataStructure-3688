/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Potencia de matrices
Fecha creaci�n: 02/06/2021
Fecha de modificaci�n: 03/06/2021 */
#include "Matrix.h"

int** Matrix::get_matrix() {
	return matrix;
}

void Matrix::set_matrix(int** matrix_1) {
	matrix = matrix_1;
}