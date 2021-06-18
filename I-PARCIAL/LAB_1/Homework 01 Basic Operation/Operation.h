/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 22/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/

/**
*@file Operation.h
*@version 2.0
*@date 17/06/2021
*@autor Grupo 3
*@title Operaciones con plantillas (Suma,Resta,Multiplicacion,Division)
*/

#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

#ifndef OPERATION_H
#define OPERATION_H
template <typename datatype>
class Operation {

public:

	/**
  *@brief sum Suma de dos plantillas
  *@param datatype,datatype Plantilla
  *@return datatype Plantilla
  */
	datatype sum(datatype, datatype);

	/**
  *@brief subtraction Resta de dos plantillas
  *@param datatype,datatype Plantilla
  *@return datatype Plantilla
  */
	datatype subtraction(datatype, datatype);

	/**
  *@brief multiplicaction Multiplica dos plantillas
  *@param datatype,datatype Plantilla
  *@return datatype Plantilla
  */
	datatype multiplication(datatype, datatype);

	/**
  *@brief division Division de dos plantillas
  *@param datatype,datatype Plantilla
  *@return datatype Plantilla
  */
	datatype division(datatype, datatype);

};

#endif // !OPERATIONHEADER_H




