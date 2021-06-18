/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Potencia de matrices
Fecha creaci�n: 02/06/2021
Fecha de modificaci�n: 03/06/2021 */

#pragma once
class Matrix
{
private:
	int** matrix;

public:
	/**
	 * @brief Constructor
	 */
	Matrix() = default;
	/**
	 * @brief Obtener el objeto de matriz
	 * @return int**
	 */
	int** get_matrix();
	/**
	 * @brief Recibe el objeto de matriz
	 * @return int**
	 */
	void set_matrix(int**);
};