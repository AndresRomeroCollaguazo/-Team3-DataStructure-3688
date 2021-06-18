/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Potencia de matrices
Fecha creación: 02/06/2021
Fecha de modificación: 03/06/2021 */
#pragma once
#include "Matrix.h"

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
	void wax(Matrix matriz_a, int longitud);
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
	void print_All(Matrix, int);
	/**
	 * @brief Copia los datos de una matriz
	 * @param _matrix_a
	 * @param _matrix_b
	 * @param longitud
	 */
	void copy(Matrix, Matrix, int);
	/**
	 * @brief  Eleva a un exponenete a las Matrices
	 * @param  matrix_a
	 * @param  matrix_b
	 * @param  longitud
	 * @param  exponente
	 */
	void boosted(Matrix, Matrix, int, int);
};