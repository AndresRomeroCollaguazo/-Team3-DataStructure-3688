/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/
#pragma once
#include <iostream>
#include "MethodsHP.h"
using namespace std;
/**
*@fileOperatorHP.h
*@version 1.0
*@date 17/06/2021
*@autor Grupo 3
*@title Validacion
*/

class OperatorHP
{
private:
	MethodsHP method;

public:
	/**
	  *@brief MethodsHP
	  *@param 
	  *@return 
	  */
	OperatorHP() = default;

	/**
	  *@brief MethodsHP
	  *@param 
	  *@return 
	  */
	OperatorHP(MethodsHP);

	/**
	  *@brief operator ++
	  *@param
	  *@return double
	  */
	double operator ++();

	/**
	  *@brief operator --
	  *@param
	  *@return double
	  */
	double operator --();

	/**
	  *@brief operator *
	  *@param 
	  *@return double
	  */
	double operator *();

};