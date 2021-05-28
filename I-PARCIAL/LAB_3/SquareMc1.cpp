// SquareMc1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Square.h"


int main() {
	Square sq;

	float x = 130.5;
	float y = 480.30;
	double z = 147.5;
	printf("\nEl area del cuadrado es: %.2f", sq.mesuares(x, y));
	printf("\nEl alto del cuadrado +60 es: %.2f", sq.mesuares(y));
	printf("\nEl ancho del cuadrado -60 es: %.2f", sq.mesuares(z));
	
	printf("\nEl alto menos 30  es: %.2f", sq.operator-(x));
	printf("\nEl ancho por 100  es: %.2f", sq.operator*(y));
	printf( "\nEl alto dividido para 2 es: % .2f",sq.operator/(x));
	

	return 0;
}