/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 22/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/
/*
*
* 
* 
*/
#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

#ifndef BUILDER_H
#define BUILDER_H

/**
*@file Builder.h
*@version 2.0
*@date 17/06/2021
*@autor Grupo 3
*@title Plantillas
*/

template <typename datatype>
class Builder {
private:
	datatype value1;
	datatype value2;
public:
 /**
  *@brief set_Value setter de value1
  *@param datatype Plantilla
  *@return void
  */
	void set_Value1(datatype);

	/**
	 *@brief Builder Constructor
	 *@param datatype,datatype Plantillas
	 *@return 
	 */
	Builder(datatype, datatype);

	/**
	 *@brief get_Value1 getter de value1
	 *@param void
	 *@return datatype Plantilla
	 */
	datatype get_Value1();

	/**
	 *@brief set_Value2 setter de value2
	 *@param datatype Plantilla
	 *@return void
	 */
	void set_Value2(datatype);

	/**
	 *@brief get_Value2 getter de value2
	 *@param void
	 *@return datatype Plantilla
	 */
	datatype get_Value2();
};


#endif // !BUILDER_H

