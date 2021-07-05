
#include "Nodo.h"
#include "Stack.h"
#include <malloc.h>
#include <iostream>
using namespace std;

bool Stack::empty(void)//Devuelve verdadero si la pila está vacía, de lo contrario es falso.
{
	return (this->first == NULL);
}


void Stack::push(char _value)//agrega un elemento a la pila.
{
	Nodo* nuevo = new Nodo(_value);
	if (empty())
	{
		this->first = nuevo;
	}
	else
	{
		this->actual->setNext(nuevo);
	}
	this->actual = nuevo;
}


void Stack::pop(void)//elimina un elemento de la pila.
{
	Nodo* temporal = new Nodo(0);
	temporal = this->first;


	if (this->first != NULL) {
		if (temporal->getNext() != NULL) {
			while ((temporal->getNext())->getNext() != NULL) {
				temporal = temporal->getNext();
			}
			cout << "\n Nodo Eliminado\n\n";
			free(temporal->getNext());
			temporal->setNext(NULL);
		}
		else
		{
			this->first = NULL;
		}
	}
	else {
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}
}

char Stack::top(void)//Devuelve el elemento superior de la pila.
{
	Nodo* temporal = new Nodo(0);
	temporal = this->first;


	if (this->first != NULL) {
		if (temporal->getNext() != NULL) {
			while (temporal->getNext() != NULL) {
				temporal = temporal->getNext();
			}
			return temporal->getDate();
		}
		else
		{
			this->first = NULL;
		}
	}
}

void Stack::printStack(void)
{
	int z = 40;
	char car = char(z);
	Nodo* temporal = this->first;
	cout << "PILA IMPRESA\n";
	while (temporal) {
		cout << "|" << temporal->getDate() << "|\n " << car << "\n";
		temporal = temporal->getNext();
	}
	cout << "NULL \n";
}



Nodo* Stack::getActual(void)
{
	return actual;
}

void Stack::setActual(Nodo* newActual)
{
	actual = newActual;
}

Nodo* Stack::getFirst(void)
{
	return first;
}

void Stack::setFirst(Nodo* newFirst)
{
	first = newFirst;
}

Stack::Stack()
{
	this->first = NULL;
	this->actual = NULL;
}


Stack::~Stack()
{
}