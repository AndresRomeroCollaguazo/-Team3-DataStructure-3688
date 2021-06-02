/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Fechas de pago
Fecha creación: 28/05/2021
Fecha de modificación: 01/06/2021 */
#include "Date.h"

Date::Date(int _day, int _month, int _year)
{
	this->vect[0] = _day;
	this->vect[1] = _month;
	this->vect[2] = _year;
}

void Date::setDay(int _day)
{
	this->vect[0] = _day;
}

int Date::getDay()
{
	return this->vect[0];
}

void Date::setMonth(int _month)
{
	this->vect[1] = _month;
}

int Date::getMonth()
{
	return vect[1];
}

void Date::setYear(int _year)
{
	this->vect[2] = _year;
}

int Date::getYear()
{
	return vect[2];
}
