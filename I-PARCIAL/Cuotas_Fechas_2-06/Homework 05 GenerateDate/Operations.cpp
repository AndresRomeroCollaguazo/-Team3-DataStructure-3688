/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Fechas de pago
Fecha creación: 28/05/2021
Fecha de modificación: 01/06/2021 */
#include "Operations.h"
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <clocale>
#include "Validate.h"
using namespace std;
#pragma warning(disable : 4996)
int Operations::generate_Week_Day(Date date)
{
	int day, month, year, century, dayOfWeek, firstdayOfMonth;
	bool isLeap_;
	day = date.getDay();
	month = date.getMonth();
	year = date.getYear();
	int regular[] = { 0,3,3,6,1,4,6,2,5,0,3,5 };
	int bisiesto[] = { 0,3,4,0,2,5,0,3,6,1,4,6 };
	isLeap_ = is_Leap(year);
	if (isLeap_ == true) {
		firstdayOfMonth = bisiesto[month - 1];
	}
	else {
		firstdayOfMonth = regular[month-1];
	}
	dayOfWeek = ((year - 1) % 7 + (((year - 1) / 4) - (3 * (((year - 1) / 100) + 1)) / 4) % 7 + firstdayOfMonth % 7 + day % 7) % 7;
	return dayOfWeek;
}

void Operations::print(Date dates[], int dues)
{
	for (int i = 0; i < dues; i++) {
		cout << "Dia de Pago " << (i + 1) << "->       ";
		cout << dates[i].getDay() << " - " << dates[i].getMonth() << " - " << dates[i].getYear() << endl;
	}

}

Date Operations::enter_Date()
{
	int day = 0, month = 0, year = 0;
	char cad[10];
	char cad1[10];
	char cad2[10];
	Validate v;
	
	strcpy(cad, v.ingresar("\nIngrese el dia ->"));
	day = atoi(cad);
	strcpy(cad1, v.ingresar("\nIngrese el mes ->"));
	month = atoi(cad1);
	strcpy(cad2, v.ingresar("\nIngrese el mes ->"));
	year = atoi(cad2);

	Date fecha(day, month, year);
	return fecha;
}

bool Operations::is_Leap(int year)//biciesto
{
	if ((year % 4 == 0) && !(year % 100 == 0)) {
		return true;
	}
	else if (year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Operations::is_laborable(Date date)
{
	int dayOfWeek;
	dayOfWeek = generate_Week_Day(date);
	if (dayOfWeek == 0 || dayOfWeek == 6)
	{
		return false;
	}
	else
	{
		return true;
	}

	return false;
}
