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

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Spanish");
	Operations op;
	Date date;
	Date payment_dates[12];
	bool islaborableDay = false;
	int newDay, oldDay, dues;
	int newMonth, oldMonth;
	date = op.enter_Date();
	cout << " " << endl;
	cout << " Ingrese a cuantas cuotas desea diferir ->";
	cin >> dues;
	cout << "Fechas de pago maximas " << endl;
	oldDay = date.getDay();
	oldMonth = date.getMonth();

	for (int i = 0; i < dues; i++) {
		while (islaborableDay == false) {
			islaborableDay = op.is_laborable(date);
			if (islaborableDay == false) {
				newDay = date.getDay() + 1;
				date.setDay(newDay);
			}
		}
		payment_dates[i] = date;
		newMonth = date.getMonth() + 1;
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
