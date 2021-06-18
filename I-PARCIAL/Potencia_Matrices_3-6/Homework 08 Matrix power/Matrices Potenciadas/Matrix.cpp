/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Potencia de matrices
Fecha creación: 02/06/2021
Fecha de modificación: 03/06/2021 */
#include "Matrix.h"

int** Matrix::get_matrix() {
	return matrix;
}

void Matrix::set_matrix(int** matrix_1) {
	matrix = matrix_1;
}