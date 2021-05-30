#include "Operations.h"
#include <stdlib.h>
#include <iostream>

using namespace std;
Operations::Operations()
{
}
void Operations::wax(Vector &vect)
{
	printf("ENCERAR\n");
	int* a = vect.getV1();
	for (int i = 0; i < 10; i++)
	{
		a[i] = 0;
	}
}

void Operations::get_into(Vector& vect)
{
	printf("INGRESAR\n");
	int* a = vect.getV1();
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 10 + 1;
	}
}

float Operations::process(Vector& vect)
{
	printf("PROCESAR\n");
	int* a = vect.getV1();
	float promedio = 0.0f;
	for (int i = 0; i < 10; i++) {
		promedio += a[i];
	}
	return promedio / 10;
}

void Operations::print(Vector &vect)
{
	int* a = vect.getV1();
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
}


