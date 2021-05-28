/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller de Operadores Sobrecargados
Fecha creaci�n: 26/05/2021
Fecha modificaci�n: 27/05/2021*/
/***********************************************************************/
#pragma once
#include <iostream>
#include "MethodsHP.h"
using namespace std;


class OperatorHP
{
private: 
	MethodsHP method;

public:
	OperatorHP() = default;
	OperatorHP(MethodsHP);
	double operator ++();
	double operator --();
	double operator *();

};