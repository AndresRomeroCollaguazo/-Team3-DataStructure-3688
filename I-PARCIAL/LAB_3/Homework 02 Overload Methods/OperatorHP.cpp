/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/
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