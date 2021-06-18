/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Fechas de pago
Fecha creaci�n: 28/05/2021
Fecha de modificaci�n: 01/06/2021 */
#include "Date.h"
#include"Operations.h"
Date::Date(int _day, int _month, int _year)
{
	this->vect[0] = _day;
	this->vect[1] = _month;
	this->vect[2] = _year;
}

void Date::setDay(int _day)
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

int Date::getDay()
{
	return this->vect[0];
}

void Date::setMonth(int _month)
{
	if (_month == 13)
	{
		_month = 1;
	}
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
