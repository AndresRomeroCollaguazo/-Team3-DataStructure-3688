/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/
#include <iostream>
#include "OperatorsA.h"
#include "MethodsA.h"

int main()
{
	double d = 20.89;
	float b = 15.5f;
	int a = 5;
	Methods methods(a, d,b);
	Operators op(methods);
	printf("\nLa multiplicacion es %.2f", methods.multiplication(a));
	printf("\nLa multiplicacion es %.2f", methods.multiplication(d,a));
	printf("\nLa multiplicacion es %.2f", methods.multiplication(b,d,a));
	printf("\nLa multiplicacion es %.2f", op.operator*());
	printf("\nLa suma es %.2f", op.operator++());
	printf("\nLa resta es %.2f", op.operator--());
	return 0;
}

