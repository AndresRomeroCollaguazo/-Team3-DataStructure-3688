/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller de Operadores Sobrecargados
Fecha creaci�n: 26/05/2021
Fecha modificaci�n: 27/05/2021*/
/***********************************************************************/
#include "OperatorHP.h"

OperatorHP::OperatorHP(MethodsHP mm)
{
	this->method = mm;
}

double OperatorHP::operator++(void)
{
	return this->method.get_ValueB() + 10;
}
double OperatorHP::operator--(void)
{
	return this->method.get_ValueB() - 5;
}
double OperatorHP::operator*(void)
{
	return this->method.get_ValueB() * 3;
}