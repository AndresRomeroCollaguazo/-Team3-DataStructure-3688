/*Universidad de las Fuerzas Armadas "ESPE"
Ing. de Software
Autor: Pérez Hámilton
Deber de Matriz Diagonal
Fecha creación : 06 / 06 / 2021
Fecha de modificación : 08 / 06 / 2021 */

/**
  * @file Operations.h
  * @version 1.0
  * @date 08-06-2021
  * @author Hamilton Dario Perez Zambrano
  * @title Objeto operations
  * @brief Clase Operations
  *
  */

#pragma once
#include <iostream>
#include "Matrix.h"

class Operations {
private:

public:

	void matrixDrandom( int n);
	/**
	  * @brief matrixDrandom genera una matriz con doble diagonal con numeros aleatorios
	  * @param n valor de ingreso
	  */
	void matrix1Di( int n);
	/**
	  * @brief matrix1Di genera una matriz con doble diagonal usando identidad
	  * @param n valor de ingreso
	  */
};