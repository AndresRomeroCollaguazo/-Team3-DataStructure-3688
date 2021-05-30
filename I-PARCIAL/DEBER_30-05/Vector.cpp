#include "Vector.h"

Vector::Vector(int v[10])
{
	for (int i = 0; i < 10; i++)
	{
		this->v1[i] = v[i];
	}
}


int* Vector::getV1() 
{
	return this->v1;
}

void Vector::setV1(int v[10])
{
	for (int i = 0; i < 10; i++)
	{
		this->v1[i] = v[i];
	}
}

Vector::~Vector()
{
}



