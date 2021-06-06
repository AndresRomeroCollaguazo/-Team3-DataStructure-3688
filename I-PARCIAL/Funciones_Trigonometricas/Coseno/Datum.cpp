/***********************************************************************
 * Module:  Datum.cpp
 * Author:  avand
 * Modified: sábado, 5 de junio de 2021 15:37:13
 * Purpose: Implementation of the class Datum
 ***********************************************************************/

#include "Datum.h"

////////////////////////////////////////////////////////////////////////
// Name:       Datum::getDatum()
// Purpose:    Implementation of Datum::getDatum()
// Return:     double
////////////////////////////////////////////////////////////////////////

double Datum::getDatum(void)
{
   return datum;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datum::setDatum(double newDatum)
// Purpose:    Implementation of Datum::setDatum()
// Parameters:
// - newDatum
// Return:     void
////////////////////////////////////////////////////////////////////////

void Datum::setDatum(double newDatum)
{
   datum = newDatum;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datum::Datum(double _datum)
// Purpose:    Implementation of Datum::Datum()
// Parameters:
// - _datum
// Return:     
////////////////////////////////////////////////////////////////////////

Datum::Datum(double _datum)
{
   this->datum=_datum;
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