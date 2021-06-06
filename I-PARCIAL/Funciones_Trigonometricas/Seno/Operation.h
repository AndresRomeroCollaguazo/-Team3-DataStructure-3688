/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Funciones Trigonometricas
Fecha creación: 04/06/2021
Fecha de modificación: 06/06/2021 */
/**
  * @file Operation.h
  * @version 1.0
  * @date 06-06-2021
  * @author Michelle Alexandra Cantuna
  * @brief funcion seno con recursividad
  * @title SenoRecursividad
  *
  */
#pragma once

#include"Datum.h"
class Operation {
public:
	/**
	  * @brief factorial Retorna el factorial de un numero entero
	  * @param n Numero a calcular
	  * @return Devuelve el numero factorial calculado
	  */
	int factorial(int n);
	/**
	 * @brief seno Devuelve el seno de un numero en radianes
	 * @param d Objeto Datum que contiene el dato a calcular
	 *  @param n Numero a calcular
	 * @return Devuelve el seno calculado
	 */
	double seno(Datum d, int n);
};