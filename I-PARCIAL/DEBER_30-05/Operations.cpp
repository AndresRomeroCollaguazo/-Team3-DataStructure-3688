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
void Operations::wax(Vector &vect) \\ Llena de ceros el Array ingresado.
{
	printf("ENCERAR\n");
	int* a = vect.getV1();
	for (int i = 0; i < 10; i++)
	{
		a[i] = 0;
	}
}

void Operations::get_into(Vector& vect) \\ Llena de numeros aleatorios el Array ingresado.
{
	printf("INGRESAR\n");
	int* a = vect.getV1();
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 10 + 1;
	}
}

float Operations::process(Vector& vect) \\ Obtiene el promedio del Array ingresado
{
	printf("PROCESAR\n");
	int* a = vect.getV1();
	float promedio = 0.0f;
	for (int i = 0; i < 10; i++) {
		promedio += a[i];
	}
	return promedio / 10;
}

void Operations::print(Vector &vect) \\ Imprime el Array ingresado.
{
	int* a = vect.getV1();
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
}


