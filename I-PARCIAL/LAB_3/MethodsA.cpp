/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/
#include "MethodsA.h"
double Methods::get_Value_B(void)
{
	return value_B;
}
void Methods::set_Value_B(double new_Value_B)
{
   value_B = new_Value_B;
}
int Methods::get_Value_A(void)
{
   return value_A;
}
void Methods::set_Value_A(int new_Value_A)
{
   value_A = new_Value_A;
}
float Methods::get_Value_C(void)
{
	return value_C;
}void Methods::set_Value_C(int new_Value_C)
{
	value_C = new_Value_C;
}
Methods::Methods(int new_Value_A, double new_Value_B,float new_Value_C)
{
	this->value_C = new_Value_C;
	this->value_A = new_Value_A;
	this->value_B = new_Value_B;
}
double Methods::multiplication(int value_A)
{
	return (this->get_Value_A() * value_A);//@overloaded methods for multiplying an integer by the value A

}
double Methods::multiplication(double value_A, int value_B)
{
	return (this->get_Value_B() * value_A*value_B);//@overloaded methods to multiply an integerand double a by the value B
}
double Methods::multiplication(float valorA, double valorB, int valorC)
{
	return (this->get_Value_C() * value_A*value_B*value_C);//@overloaded methods to multiply an integer, doubleand a float a by the value C
}