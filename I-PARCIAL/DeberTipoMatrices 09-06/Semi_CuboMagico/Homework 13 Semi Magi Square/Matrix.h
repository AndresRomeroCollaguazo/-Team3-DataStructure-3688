/*Universidad de las Fuerzas Armadas " ESPE "
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber tipo Matrices
Fecha creación : 08 / 04 / 2021
Fecha de modificación : 08 / 06 / 2021 * /
/ **
*@ archivo Matrix.h
* @version 1.0
* @ Fecha 08 - 06 - 2021
* @autora Jorge Andrés Romero Collaguazo
* @brief Semi_CuboMagico
* @título Semi_CuboMagico
*
*/

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
