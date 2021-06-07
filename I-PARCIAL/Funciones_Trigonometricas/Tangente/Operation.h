/ *Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Funciones Trigonometricas
Fecha creaci�n : 06 / 04 / 2021
Fecha de modificaci�n : 06 / 06 / 2021 * /
/ **
*@file Operation.h
* @version 1.0
* @ fecha 06 - 06 - 2021
* @autora Jorge Andr�s Romero Collaguazo
* @brief funcion tangente con recursividad
* @ t�tulo Tan - Recursividad
*
*/

#pragma once
#include"Datum.h"
class Operation {
public:
	/ **
		*@brief factorial Retorna el factorial de un numero entero
		* @param n Numero a calcular
		* @return Devuelve el numero factorial calculado
		* /
	int factorial(int n);
	/ **
		*@brief tan Devuelve la tangete de un numero en radianes
		* @param d Objeto Datum que contiene el dato a calcular
		* @param n Numero a calcular
		* @return Devuelve la tangente calculada
		* /
	double tan(Datum d, int n);
};