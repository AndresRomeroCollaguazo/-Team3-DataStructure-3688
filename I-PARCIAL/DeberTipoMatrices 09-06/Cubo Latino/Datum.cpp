/***********************************************************************
 * Module:  Datum.cpp
 * Author:  avand
 * Modified: martes, 8 de junio de 2021 15:27:35
 * Purpose: Implementation of the class Datum
 ***********************************************************************/

#include "Datum.h"

////////////////////////////////////////////////////////////////////////
// Name:       Datum::getVector()
// Purpose:    Implementation of Datum::getVector()
// Return:     int*
////////////////////////////////////////////////////////////////////////

int* Datum::getVector(void)
{
   return vector;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datum::setVector(int* newVector)
// Purpose:    Implementation of Datum::setVector()
// Parameters:
// - newVector
// Return:     void
////////////////////////////////////////////////////////////////////////

void Datum::setVector(int* newVector)
{
   vector = newVector;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datum::Datum(int* _vector)
// Purpose:    Implementation of Datum::Datum()
// Parameters:
// - _vector
// Return:     
////////////////////////////////////////////////////////////////////////

Datum::Datum(int* _vector)
{
   this->vector=_vector;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datum::~Datum()
// Purpose:    Implementation of Datum::~Datum()
// Return:     
////////////////////////////////////////////////////////////////////////

Datum::~Datum()
{
   // TODO : implement
}