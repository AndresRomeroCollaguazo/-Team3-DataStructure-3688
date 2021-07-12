/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller
Fecha creaci�n : 13 / 06 / 2021
Fecha de modificaci�n : 21 / 06 / 2021 */

#include "Nodo.h"
#include "Tail.h"
#include <malloc.h>
#include <iostream>
using namespace std;

bool Tail::emplyTail(void)
{
	return (this->first == NULL);
}
int Tail::getTama�o() {
	return tama�o;
}

void Tail::push(double _value)
{
	Nodo* nuevo = new Nodo(_value);
	if (emplyTail())
	{
		this->first = nuevo;
	}
	else
	{
		this->actual->setNext(nuevo);
	}
	this->actual = nuevo;
	tama�o++;
}


void Tail::pop(void)
{
	if (this->first == NULL)
		std::cout << "\n\n\tCola Vacia...!!";
	else {
		Nodo* aux = this->first;
		this->first = this->first->getNext();
		aux->setNext(NULL);
		std::cout << "Desencolado" << std::endl;
	}
}

void Tail::printTail(void)
{
	int z = 25;
	char car = char(z);
	Nodo* temporal = this->first;

	while (temporal) {
		cout << temporal->getDate() << "||";

		temporal = temporal->getNext();
	}
	cout << "NULL \n";
}



Nodo* Tail::getActual(void)
{
	return actual;
}

void Tail::setActual(Nodo* newActual)
{
	actual = newActual;
}

Nodo* Tail::getFirst(void)
{
	return first;
}

void Tail::setFirst(Nodo* newFirst)
{
	first = newFirst;
}

Tail::Tail()
{
	this->first = NULL;
	this->actual = NULL;
}


Tail::~Tail()
{
}
