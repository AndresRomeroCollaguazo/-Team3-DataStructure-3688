/*Universidad de las Fuerzas Armadas " ESPE "
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber tipo Matrices
Fecha creación : 08 / 04 / 2021
Fecha de modificación : 08 / 06 / 2021 * /
/ **
*@ archivo Operation.h
* @version 1.0
* @ Fecha 08 - 06 - 2021
* @autora Jorge Andrés Romero Collaguazo
* @brief Semi_CuboMagico
* @título Semi_CuboMagico
*
*/

#pragma once
#include "Matrix.h"

class Operation
{
public:
	/**
	 * @brief Reserva memoria para la matriz
	 * @param longitud 
	 * @return la dirreccion de una matriz 
	 */
	int **segmentar(int);
	/**
	 * @brief Inicializa la matriz en cero
	 * @param matriz_a 
	 * @param longitud 
	 */
	void encerar(Matrix matriz_a, int longitud);
	/**
	 * @brief Asigna Valores a la matriz
	 * @param matriz_a
	 * @param longitud 
	 */
	void ingresar(Matrix, int);
	/**
	 * @brief  Multiplicacion de Matrices
	 * @param  matrix_a 
	 * @param  matrix_b 
	 * @param  matrix_c 
	 * @param  longitud
	 */
	void calcular(Matrix, Matrix, Matrix, int);
	/**
	 * @brief Impresion de la matriz
	 * @param _matrix_a 
	 * @param longitud 
	 */
	void imprimir(Matrix, int);
	/**
	 * @brief Copia los datos de una matriz
	 * @param _matrix_a 
	 * @param _matrix_b 
	 * @param longitud
	 */
	void copiar_matriz(Matrix, Matrix, int);
	/**
	 * @brief  Calcula la potencia de una matriz
	 * @param _matrix_a 
	 * @param _matrix_b 
	 * @param longitud
	 */
	void calcular_potencia(Matrix, Matrix, int, int);
	/**
	 * @brief Llena matriz con datos numericos sin que sus diagonales sean iguales
	 * @param matriz_a
	 * @param longitud
	 */
	void semi_magic_square(Matrix matriz_a, int longitud);
	/**
	 * @brief Intercambia filas y columnas
	 * @param matriz_a
	 * @param longitud
	 */
	void permutate(Matrix matriz_a, int longitud);
};
