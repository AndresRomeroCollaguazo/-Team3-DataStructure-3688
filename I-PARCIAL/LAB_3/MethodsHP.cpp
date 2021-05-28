/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/
#include "MethodsHP.h"

float MethodsHP::get_ValueA(void)
{
	return valueA;
}
void MethodsHP::set_ValueA(float new_ValueA)
{
	valueA = new_ValueA;
}
double MethodsHP::get_ValueB(void)
{
	return valueB;
}
void MethodsHP::set_ValueB(double new_ValueB)
{
	valueB = new_ValueB;
}
int MethodsHP::get_ValueC(void)
{
	return valueC;
}
void MethodsHP::set_ValueC(int new_ValueC)
{
	valueC = new_ValueC;
}
MethodsHP::MethodsHP(float new_ValueA, double new_ValueB, int new_ValueC)
{
	this->valueA = new_ValueA;
	this->valueB = new_ValueB;
	this->valueC = new_ValueC;
}

double MethodsHP::addition(float valueA)
{
	return (this->get_ValueA() + valueA);//@overloaded method for an adittion
}
double MethodsHP::addition(double valueB, float valueA)
{
	return (this->get_ValueB() + valueA+valueB);//@overloaded method for an adittion
}
double MethodsHP::addition(int valueC, double valueB, float valueA)
{
	return (this->get_ValueC() + valueA+valueB+valueC);//@overloaded method for an adittion
}