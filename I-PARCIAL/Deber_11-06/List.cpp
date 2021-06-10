/***********************************************************************
 * Module:  List.cpp
 * Author:  
 * Modified: mi�rcoles, 09 de junio de 2021 19:50:15
 * Purpose: Implementation of the class List
 ***********************************************************************/

#include "Nodo.h"
#include "List.h"

////////////////////////////////////////////////////////////////////////
// Name:       List::emplyList()
// Purpose:    Implementation of List::emplyList()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool List::emplyList(void)
{
   return (this->first==NULL);
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
   // TODO : implement
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
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       List::printList()
// Purpose:    Implementation of List::printList()
// Return:     void
////////////////////////////////////////////////////////////////////////

void List::printList(void)
{
   // TODO : implement
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
   this->first=NULL;
   this->actual=NULL;
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