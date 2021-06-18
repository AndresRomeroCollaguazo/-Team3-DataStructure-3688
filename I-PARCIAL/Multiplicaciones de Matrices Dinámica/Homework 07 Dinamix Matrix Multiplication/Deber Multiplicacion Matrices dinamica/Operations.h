#pragma once
#include "Matrix.h"
#include "Validation.h"

class Operations
{
public:
	/**
	 * @brief Reserva memoria para la matriz
	 * @param longitud
	 * @return la dirreccion de una matriz
	 */
	int** segment(int);
	/**
	 * @brief Inicializa la matriz en cero
	 * @param matriz_a
	 * @param longitud
	 */
	void wax(Matrix, int);
	/**
	 * @brief Asigna Valores a la matriz
	 * @param matriz_a
	 * @param longitud
	 */
	void enter(Matrix, int);
	/**
	 * @brief  Multiplicacion de Matrices
	 * @param  matrix_a
	 * @param  matrix_b
	 * @param  matrix_c
	 * @param  longitud
	 */
	void multiply(Matrix, Matrix, Matrix, int);
	/**
	 * @brief Impresion de la matriz
	 * @param _matrix_a
	 * @param longitud
	 */
	void printAll(Matrix, int);
};