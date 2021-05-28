/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/

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