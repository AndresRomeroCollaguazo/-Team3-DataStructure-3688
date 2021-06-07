#include "Datum.h"

double Datum::getDatum(void)
{
	return datum;
}

void Datum::setDatum(double newDatum)
{
	datum = newDatum;
}

Datum::Datum(double _datum)
{
	this->datum = _datum;
}

Datum::~Datum()
{
}