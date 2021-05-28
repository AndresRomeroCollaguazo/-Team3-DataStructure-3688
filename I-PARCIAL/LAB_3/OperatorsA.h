/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller de Operadores Sobrecargados
Fecha creaci�n: 26/05/2021
Fecha modificaci�n: 27/05/2021*/

#if !defined(__Class_Diagram_2_Operadores_h)
#define __Class_Diagram_2_Operadores_h
#include "MethodsA.h"
class Operators
{
public:
	Operators() = default;
	Operators(Methods);
	double operator --();
	double operator *();
	double operator ++();
protected:
private:
	Methods method;
};

#endif