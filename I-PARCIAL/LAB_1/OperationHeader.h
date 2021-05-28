/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 22/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/

#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

#ifndef OPERATIONHEADER_H
#define OPERATIONHEADER_H
template <typename datatype>
class OperationHeader {

public:
	
	datatype sum(datatype, datatype);

	datatype subtraction(datatype, datatype);

	datatype multiplication(datatype, datatype);

	datatype division(datatype, datatype);

};

#endif // !OPERATIONHEADER_H




