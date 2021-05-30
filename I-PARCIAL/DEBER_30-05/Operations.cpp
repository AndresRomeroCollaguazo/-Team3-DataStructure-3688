/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Memoria Estática
Fecha creación : 28 / 05 / 2021
Fecha de modificación : 30 / 05 / 2021 */

#include "Operations.h"
#include <stdlib.h>
#include <iostream>

using namespace std;
Operations::Operations()
{
}
void Operations::wax(Vector &vect) //@Fill the entered Array with zeros.
{
	printf("ENCERAR\n");
	int* v = vect.getVector_1();
	for (int i = 0; i < 10; i++)
	{
		v[i] = 0;
	}
}

void Operations::get_into(Vector& vect)//@Fill the entered Array with random numbers.
{
	printf("INGRESAR\n");
	int* v = vect.getVector_1();
	for (int i = 0; i < 10; i++) {
		v[i] = rand() % 10 + 1;
	}
}

float Operations::process(Vector& vect) //@Gets the average of the Array entered
{
	printf("PROCESAR\n");
	int* v = vect.getVector_1();
	float promedio = 0.0f;
	for (int i = 0; i < 10; i++) {
		promedio += v[i];
	}
	return promedio / 10;
}

void Operations::print(Vector &vect) //@Print the Array entered.
{
	int* v = vect.getVector_1();
	for (int i = 0; i < 10; i++)
	{
		cout << v[i];
	}
}


