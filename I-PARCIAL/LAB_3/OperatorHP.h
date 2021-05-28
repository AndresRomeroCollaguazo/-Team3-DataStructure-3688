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