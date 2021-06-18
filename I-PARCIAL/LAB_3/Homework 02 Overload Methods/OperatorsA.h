/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller de Operadores Sobrecargados
Fecha creaci�n: 26/05/2021
Fecha modificaci�n: 27/05/2021*/

#if !defined(__Class_Diagram_2_Operadores_h)
#define __Class_Diagram_2_Operadores_h
#include "MethodsA.h"
/**
*@file OperatorsA.h
*@version 1.0
*@date 17/06/2021
*@autor Grupo 3
*@title Validacion
*/
class Operators
{
public:

	/**
	  *@brief Operators
	  *@param 
	  *@return
	  */
	Operators() = default;

	/**
	  *@brief Operators
	  *@param 
	  *@return 
	  */
	Operators(Methods);

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

	/**
	  *@brief operator ++
	  *@param 
	  *@return double
	  */
	double operator ++();
protected:
private:
	Methods method;
};

#endif