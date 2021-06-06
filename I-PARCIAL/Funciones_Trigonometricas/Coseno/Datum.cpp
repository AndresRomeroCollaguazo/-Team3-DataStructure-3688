/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Funciones Trigonometricas
Fecha creación: 04/06/2021
Fecha de modificación: 06/06/2021 */

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
