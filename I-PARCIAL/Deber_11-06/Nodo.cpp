//********************************************************************************************
/* Universidad de las Fuerzas Armadas "ESPE"
* Software
* Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
* Deber de Listas
* Fecha creación: 09/06/2021
* Fecha de modificación: 10/06/2021 */
//********************************************************************************************
/*************************
 * Module:  Nodo.cpp
 * Author:
 * Modified: miÃ©rcoles, 09 de junio de 2021 19:54:24
 * Purpose: Implementation of the class Nodo
 *************************/

#include "Nodo.h"

 ////////////////////////////////////////////////////////////////////////
 // Name:       Nodo::~Nodo()
 // Purpose:    Implementation of Nodo::~Nodo()
 // Return:     
 ////////////////////////////////////////////////////////////////////////

Nodo::~Nodo()
{
    // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getDate()
// Purpose:    Implementation of Nodo::getDate()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Nodo::getDate(void)
{
    return date;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setDate(int newDate)
// Purpose:    Implementation of Nodo::setDate()
// Parameters:
// - newDate
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setDate(int newDate)
{
    date = newDate;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getNext()
// Purpose:    Implementation of Nodo::getNext()
// Return:     Nodo*
////////////////////////////////////////////////////////////////////////

Nodo* Nodo::getNext(void)
{
    return next;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setNext(Nodo* newNext)
// Purpose:    Implementation of Nodo::setNext()
// Parameters:
// - newNext
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setNext(Nodo* newNext)
{
    next = newNext;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo()
// Purpose:    Implementation of Nodo::Nodo()
// Return:     
////////////////////////////////////////////////////////////////////////

Nodo::Nodo(int value)
{
    this->date = value;
    this->next = NULL;
}
