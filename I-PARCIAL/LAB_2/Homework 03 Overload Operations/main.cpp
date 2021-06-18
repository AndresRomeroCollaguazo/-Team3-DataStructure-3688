/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/

#include <iostream>
#include <conio.h>
#include "Operations.h"
#include "Data.h"
#include "Validate.h"
#pragma warning(disable : 4996)
using namespace std;
int main()
{
	Validate check;
	char* line = new char[10];
	char* line2 = new char[10];
	int value1, value2;
	strcpy(line, check.validate_Char("ingrese valor 1 -> "));
	value1 = atof(line);
	cout << "\n continuar..."; _getch();
	cout << "\nValor Ingresado: " << value1 << endl;
	strcpy(line2, check.validate_Char("ingrese valor 2 -> "));
	value2 = atof(line2);
	cout << "\n continuar..."; _getch();
	cout << "\nValor Ingresado: " << value2 << endl;

	Data<float> datum(value2, value1);
	Operations operation(datum);
	printf("\nLa suma es %.2f", operation.operator +());
	printf("\nLa resta es %.2f", operation.operator -());
	return 0;
}
