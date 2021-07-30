//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de Calculadora
//  Fecha creación : 18 / 07 / 2021
//  Fecha de modificación : 23 / 07 / 2021  */
/**
*@file Trigonometric.h
*@version 1.0
*@date 29/07/2021
*@author Grupo 3
*@title Funciones trigonometricas
*@brief Funciones trigonometricas
*/
#pragma once
class Trigonometric
{
public:
	
	/**
	 * @brief calcula el coseno
	 * @return double
	 */
	double cos(double);
	/**
	 * @brief calcula la cotangente 
	 * @return double
	 */
	double cot(double);

	/**
	 * @brief calcula el factorial
	 */
	long factorial(int);
	/**
	 * @brief calcula la tangente
	 *
	 * @return double
	 */
	double tan(double);

	/**
	 * @brief calcula la secante
	 *
	 * @return double
	 */
	double sec(double);
	/**
	* @brief calcula el seno
	*
	* @return double
	*/
	double sin(double);
	
	double potencia(double, double);
};
