/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller de Operadores Sobrecargados
Fecha creaci�n: 26/05/2021
Fecha modificaci�n: 27/05/2021*/
/***********************************************************************/

#pragma once
#include<iostream>
using namespace std;
/**
*@file OperatorM.h
*@version 1.0
*@date 17/06/2021
*@autor Grupo 3
*@title Validacion
*/
class OperatorM
{
private:

public:
	/**
	  *@brief OperatorM
	  *@param 
	  *@return 
	  */
	OperatorM();

	/**
	  *@brief forFiveHundred
	  *@param float
	  *@return float
	  */
	float forFiveHundred(float);

	/**
	  *@brief forFiveHundred
	  *@param int
	  *@return float
	  */
	float forFiveHundred(int);

	/**
	  *@brief forFiveHundred
	  *@param double
	  *@return float
	  */
	float forFiveHundred(double);

	/**
	  *@brief operator +
	  *@param float
	  *@return float
	  */
	float operator +(float);

	/**
	  *@brief operator *
	  *@param float
	  *@return float
	  */
	float operator *(float);

	/**
	  *@brief operator -
	  *@param float
	  *@return float
	  */
	float operator -(float);
};

