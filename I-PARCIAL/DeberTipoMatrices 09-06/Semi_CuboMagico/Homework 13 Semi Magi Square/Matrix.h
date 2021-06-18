/*Universidad de las Fuerzas Armadas " ESPE "
Software
Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber tipo Matrices
Fecha creaci�n : 08 / 04 / 2021
Fecha de modificaci�n : 08 / 06 / 2021 * /
/ **
*@ archivo Matrix.h
* @version 1.0
* @ Fecha 08 - 06 - 2021
* @autora Jorge Andr�s Romero Collaguazo
* @brief Semi_CuboMagico
* @t�tulo Semi_CuboMagico
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
