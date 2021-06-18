/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller de Operadores Sobrecargados
Fecha creaci�n: 26/05/2021
Fecha modificaci�n: 27/05/2021*/

#include "OperatorsA.h"
Operators::Operators(Methods m) {
	this->method = m;
}
double Operators::operator*(void)
{
	return this->method.get_Value_A() * this->method.get_Value_A();//@operator overloaded to multiply by itself
}
double Operators::operator++(void)
{
	return this->method.get_Value_A() + 1;//@operator overloaded to add one unit to value A
}
double Operators::operator--(void)
{
	return this->method.get_Value_A() - 1;//@operator overloaded to subtract one unit
}