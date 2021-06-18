/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Fechas de pago
Fecha creación: 28/05/2021
Fecha de modificación: 01/06/2021 */
#include <stdio.h>
#include <stdlib.h>
#include "Operations.h"
#include "Date.h"
#include <iostream>
#include <conio.h>
#include <clocale>
#include "Validate.h"
#pragma warning(disable : 4996)
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Spanish");
	Operations op;
	Date date;
	Validate v;
	Date payment_dates[12];
	char cad[10];
	bool islaborableDay = false;
	int newDay, oldDay, dues;
	int newMonth=0, oldMonth;
	cout << "                GENERAR FECHAS DE PAGO POR CUOTAS" << endl;
	date = op.enter_Date();
	cout << " " << endl;
	strcpy(cad, v.ingresar("\nIngrese a cuantas cuotas desea diferir ->"));
	dues = atoi(cad);
	cout << "\nFechas de pago maximas " << endl;
	oldDay = date.getDay();
	oldMonth = date.getMonth();
	
	for (int i = 0; i < dues; i++) {
		newMonth = date.getMonth() + 1;
	
		while (islaborableDay == false) {
			islaborableDay = op.is_laborable(date);
			if (islaborableDay == false) {
				newDay = date.getDay() + 1;
				
				if (newDay == 32)
				{	date.setMonth(date.getMonth() + 1);
				}
				
				
				date.setDay(newDay);
			}
		}
		payment_dates[i] = date;
		if (date.getDay() == 29 && date.getMonth() == 2 && !op.is_Leap(date.getYear()))
		{
			payment_dates[i].setMonth(date.getMonth() + 1);
			payment_dates[i].setDay(32);
		}
		
		if (newMonth > 12) {
			newMonth = newMonth - 12;
			date.setYear(date.getYear() + 1);
		}
		
		date.setMonth(newMonth);
		islaborableDay = false;
		date.setDay(oldDay);
	}
	op.print(payment_dates, dues);
	return 0;
}
