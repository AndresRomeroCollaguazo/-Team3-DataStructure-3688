/***********************************************************************
 * Module:  List.cpp
 * Author:
 * Modified: miércoles, 09 de junio de 2021 19:50:15
 * Purpose: Implementation of the class List
 ***********************************************************************/

#include "Nodo.h"
#include "List.h"
#include <malloc.h>
#include <iostream>
using namespace std;
 ////////////////////////////////////////////////////////////////////////
 // Name:       List::emplyList()
 // Purpose:    Implementation of List::emplyList()
 // Return:     bool
 ////////////////////////////////////////////////////////////////////////

bool List::emplyList(void)
{
	return (this->first == NULL);
}

////////////////////////////////////////////////////////////////////////
// Name:       List::insertToHead(int _value)
// Purpose:    Implementation of List::insertToHead()
// Parameters:
// - _value
// Return:     void
////////////////////////////////////////////////////////////////////////

void List::insertToHead(int _value)
{
	Nodo* nuevo = new Nodo(_value);
	if (emplyList())
	{
		this->first = nuevo;
	}
	else
	{
		this->actual->setNext(nuevo);
	}
	this->actual = nuevo;
}

////////////////////////////////////////////////////////////////////////
// Name:       List::insertToTail(int _value)
// Purpose:    Implementation of List::insertToTail()
// Parameters:
// - _value
// Return:     void
////////////////////////////////////////////////////////////////////////

void List::insertToTail(int _value)
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       List::deleteToHead()
// Purpose:    Implementation of List::deleteToHead()
// Return:     void
////////////////////////////////////////////////////////////////////////

void List::deleteToHead(void)
{
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       List::deleteToTail()
// Purpose:    Implementation of List::deleteToTail()
// Return:     void
////////////////////////////////////////////////////////////////////////

void List::deleteToTail(void)
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

////////////////////////////////////////////////////////////////////////
// Name:       List::printList()
// Purpose:    Implementation of List::printList()
// Return:     void
////////////////////////////////////////////////////////////////////////

void List::printList(void)
{
	Nodo* temporal = this->first;
	while (temporal) {
		cout << temporal->getDate() << "->";
		temporal = temporal->getNext();
	}
	cout << "NULL \n";
}

////////////////////////////////////////////////////////////////////////
// Name:       List::getActual()
// Purpose:    Implementation of List::getActual()
// Return:     Nodo*
////////////////////////////////////////////////////////////////////////

Nodo* List::getActual(void)
{
	return actual;
}

////////////////////////////////////////////////////////////////////////
// Name:       List::setActual(Nodo* newActual)
// Purpose:    Implementation of List::setActual()
// Parameters:
// - newActual
// Return:     void
////////////////////////////////////////////////////////////////////////

void List::setActual(Nodo* newActual)
{
	actual = newActual;
}

////////////////////////////////////////////////////////////////////////
// Name:       List::getFirst()
// Purpose:    Implementation of List::getFirst()
// Return:     Nodo*
////////////////////////////////////////////////////////////////////////

Nodo* List::getFirst(void)
{
	return first;
}

////////////////////////////////////////////////////////////////////////
// Name:       List::setFirst(Nodo* newFirst)
// Purpose:    Implementation of List::setFirst()
// Parameters:
// - newFirst
// Return:     void
////////////////////////////////////////////////////////////////////////

void List::setFirst(Nodo* newFirst)
{
	first = newFirst;
}

////////////////////////////////////////////////////////////////////////
// Name:       List::List()
// Purpose:    Implementation of List::List()
// Return:     
////////////////////////////////////////////////////////////////////////

List::List()
{
	this->first = NULL;
	this->actual = NULL;
}

////////////////////////////////////////////////////////////////////////
// Name:       List::~List()
// Purpose:    Implementation of List::~List()
// Return:     
////////////////////////////////////////////////////////////////////////

List::~List()
{
	// TODO : implement
}

