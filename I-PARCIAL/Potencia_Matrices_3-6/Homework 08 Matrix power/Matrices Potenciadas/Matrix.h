
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Potencia de matrices
Fecha creaci�n: 02/06/2021
Fecha de modificaci�n: 03/06/2021 */

/***********************************************************************
 * Module:  Matrix.h
 * Author:  HP
 * Modified: mi�rcoles, 2 de junio de 2021 15:47:51
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