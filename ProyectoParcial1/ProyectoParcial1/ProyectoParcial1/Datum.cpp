#include "Datum.h"

int* Datum::getArreglo(void)
{
	return arreglo[10];
}

void Datum::setArreglo(int* newArreglo)
{
	arreglo[10] = newArreglo;
}

int Datum::getDigito(void) 
{
	return this->digito;
}

void Datum::setDigito(int digito)
{
	this->digito = digito;
}

int Datum::getSumaDigitos(void)
{
	return this->sumaDigitos;
}

void Datum::setSumaDigitos(int sumadigitos)
{
	this->sumaDigitos = sumadigitos;
}

Datum::Datum(int* _arreglo, int _digito, int _sumadigitos)
{
	this->arreglo[10] = _arreglo;
	this->digito = _digito;
	this->sumaDigitos = _sumadigitos;
}

Datum::~Datum()
{
	// TODO : implement
}