// Programa3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
#include "Operaciones.h"
#include "Datos.h"


int main()
{
	double d = 20.89;
	float b = 15.5f;
	int a = 5, b1 = 6;
	Datos<float> dato(b, d);
	Operaciones operacion(dato);
	printf("\nLa suma es %.2f", operacion.operator +());
	printf("\nLa resta es %.2f", operacion.operator -());
	return 0;
}
