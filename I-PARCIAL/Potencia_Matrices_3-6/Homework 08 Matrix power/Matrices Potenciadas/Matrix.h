
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Potencia de matrices
Fecha creación: 02/06/2021
Fecha de modificación: 03/06/2021 */

/***********************************************************************
 * Module:  Matrix.h
 * Author:  HP
 * Modified: miércoles, 2 de junio de 2021 15:47:51
 * Purpose: Declaration of the class Matrix
 ***********************************************************************/
#pragma once

 /**
 *@file Matrix.h
 *@version 1.0
 *@date 03/06/2021
 *@autor Grupo 3
 *@title Elevar una matriz
 */

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