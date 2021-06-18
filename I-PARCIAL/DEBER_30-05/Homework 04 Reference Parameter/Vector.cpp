/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Memoria Estática
Fecha creación : 28 / 05 / 2021
Fecha de modificación : 30 / 05 / 2021 */

#include "Vector.h"

Vector::Vector(int v[10])
{
	for (int i = 0; i < 10; i++)
	{
		this->vector_1[i] = v[i];
	}
}


int* Vector::getVector_1() 
{
	return this->vector_1;
}

void Vector::setVector_1(int v[10])
{
	for (int i = 0; i < 10; i++)
	{
		this->vector_1[i] = v[i];
	}
}

Vector::~Vector()
{
}



