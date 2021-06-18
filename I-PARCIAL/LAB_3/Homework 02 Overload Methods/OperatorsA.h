/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/

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