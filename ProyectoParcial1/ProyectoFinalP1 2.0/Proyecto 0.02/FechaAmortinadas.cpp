#include "FechaAmortinadas.h"

/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Fechas de pago
Fecha creación: 28/05/2021
Fecha de modificación: 01/06/2021 */


FechaAmortinadas::FechaAmortinadas(int _day, int _month, int _year)
{
	this->vect[0] = _day;
	this->vect[1] = _month;
	this->vect[2] = _year;
}

void FechaAmortinadas::setDay(int _day)
{

	if (_day == 32)
	{
		_day = 1;
	}
	if (_day == 33)
	{
		_day = 1;
	}
	this->vect[0] = _day;
}

int FechaAmortinadas::getDay()
{
	return this->vect[0];
}

void FechaAmortinadas::setMonth(int _month)
{
	if (_month == 13)
	{
		_month = 1;
	}
	this->vect[1] = _month;
}

int FechaAmortinadas::getMonth()
{
	return vect[1];
}

void FechaAmortinadas::setYear(int _year)
{
	this->vect[2] = _year;
}

int FechaAmortinadas::getYear()
{
	return vect[2];
}
