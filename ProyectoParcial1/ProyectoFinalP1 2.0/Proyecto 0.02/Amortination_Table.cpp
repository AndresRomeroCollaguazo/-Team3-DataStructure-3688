#include "Amortination_Table.h"
#include "FechaAmortinadas.h"
#include "OperationsAmortization.h"
#include "Amortization.h"
#include <iostream>
using namespace std;
void Amortination_Table::generateAmortitation(Nodo* c) {
	FechaAmortinadas payment_dates[12];
	bool islaborableDay = false;
	FechaAmortinadas date = c->getCuenta().getFecha();
	OperationsAmortization op;
	int dues = c->getCuenta().getCuotas();
	int oldDay = date.getDay();
	int oldMonth = date.getMonth();
	cout << "\n" << endl;
	for (int i = 0; i < dues; i++) {
		int newMonth = date.getMonth() + 1;

		while (islaborableDay == false) {
			islaborableDay = op.is_laborable(date);
			if (islaborableDay == false) {
				int newDay = date.getDay() + 1;

				if (newDay == 32)
				{
					date.setMonth(date.getMonth() + 1);
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
	Amortization a(c->getCuenta().getDeuda(), c->getCuenta().getInterest(), dues);
	string* line_azn = new string[dues + 1];
	a.table_Amortization(line_azn, dues + 1, 0, 0, c->getCuenta().getDeuda(), 0);

	cout << "--------------------------------------" << endl;
	cout << "--" << " CEDULA: " << c->getCuenta().getPersona().getCedula() << "               -- " << endl;
	cout << "--" << " TASA: " << c->getCuenta().getInterest() << " % " << "                      -- " << endl;
	cout << "--" << " PERIODO: " << c->getCuenta().getCuotas() << "                        -- " << endl;
	cout << "--" << " PRESTAMO: " << c->getCuenta().getDeuda() << "                   -- " << endl;
	cout << "--------------------------------------" << endl;

	op.print(payment_dates, dues, line_azn, c->getCuenta().getPersona());
	double sumI = 0;
	double sumA = 0;
	cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "TOTAL      |               |                          |           ";
	a.sumInteres(sumI, c->getCuenta().getCuotas() + 1, 0, 0, c->getCuenta().getDeuda(), 0);
	cout << "       |    ";
	a.sumAmortization(sumA, c->getCuenta().getCuotas() + 1, 0, 0, c->getCuenta().getDeuda(), 0);
	cout << "    |     " << endl;
}

