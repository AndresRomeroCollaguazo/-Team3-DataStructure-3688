#include "OperationsAmortization.h"
#include "FechaAmortinadas.h"
#include "Validate.h"
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;

int OperationsAmortization::generate_Week_Day(FechaAmortinadas date)
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
		firstdayOfMonth = regular[month - 1];
	}
	dayOfWeek = ((year - 1) % 7 + (((year - 1) / 4) - (3 * (((year - 1) / 100) + 1)) / 4) % 7 + firstdayOfMonth % 7 + day % 7) % 7;
	return dayOfWeek;
}

void OperationsAmortization::print(FechaAmortinadas dates[], int dues, std::string* line, Persona p)
{
	//
	ofstream archivo, archivo2;
	string nombre;

	archivo.open(p.getCorreo() + ".txt", ios::out);
	archivo2.open(p.getCorreo() + ".pdf", ios::out);
	//
	int x = 1;
	cout << "                 FECHA DE VENCIMIENTO          " << "|     PAGOS   " << "|   INTERES   " << "|AMORTIZACION " << "| DEUDA PENDIENTE   |" << endl;;
	archivo << "\n                 FECHA DE VENCIMIENTO          " << "|     PAGOS   " << "|   INTERES   " << "|AMORTIZACION " << "| DEUDA PENDIENTE   |";
	archivo2 << "\n                 FECHA DE VENCIMIENTO          " << "|     PAGOS   " << "|   INTERES   " << "|AMORTIZACION " << "| DEUDA PENDIENTE   |";
	cout << "Pago 0->" << "                                       |  " << *(line + 0) << endl;
	archivo << "\nPago 0->" << "                                       |  " << *(line + 0);////
	archivo2 << "\nPago 0->" << "                                       |  " << *(line + 0);////
	for (int i = 0; i < dues; i++) {
		cout << "Pago " << (i + 1) << "-> |      ";
		archivo << "\nPago " << (i + 1) << "-> |      ";
		archivo2 << "\nPago " << (i + 1) << "-> |      ";
		switch (dates[i].getMonth()) {

		case 1: {
			cout << dates[i].getDay() << "  " << "de Enero del" << "  " << dates[i].getYear() << "         |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Enero del" << "  " << dates[i].getYear() << "         |  " << *(line + x);//
			archivo2 << dates[i].getDay() << "  " << "de Enero del" << "  " << dates[i].getYear() << "         |  " << *(line + x);//
			x++;
			break; }
		case 2: {
			cout << dates[i].getDay() << "  " << "de Febrero del" << "  " << dates[i].getYear() << "      |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Febrero del" << "  " << dates[i].getYear() << "      |  " << *(line + x);//
			archivo2 << dates[i].getDay() << "  " << "de Febrero del" << "  " << dates[i].getYear() << "      |  " << *(line + x);//

			x++;
			break; }
		case 3: {
			cout << dates[i].getDay() << "  " << "de Marzo del" << "  " << dates[i].getYear() << "        |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Marzo del" << "  " << dates[i].getYear() << "        |  " << *(line + x);//
			archivo2 << dates[i].getDay() << "  " << "de Marzo del" << "  " << dates[i].getYear() << "        |  " << *(line + x);//
			x++;
			break; }
		case 4: {
			cout << dates[i].getDay() << "  " << "de Abril del" << "  " << dates[i].getYear() << "        |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Abril del" << "  " << dates[i].getYear() << "        |  " << *(line + x);//
			archivo2 << dates[i].getDay() << "  " << "de Abril del" << "  " << dates[i].getYear() << "        |  " << *(line + x);//

			x++;
			break; }
		case 5: {
			cout << dates[i].getDay() << "  " << "de Mayo del" << "  " << dates[i].getYear() << "          |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Mayo del" << "  " << dates[i].getYear() << "          |  " << *(line + x);
			archivo2 << dates[i].getDay() << "  " << "de Mayo del" << "  " << dates[i].getYear() << "          |  " << *(line + x);
			x++;
			break; }
		case 6: {
			cout << dates[i].getDay() << "  " << "de Junio del" << "  " << dates[i].getYear() << "         |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Junio del" << "  " << dates[i].getYear() << "         |  " << *(line + x);
			archivo2 << dates[i].getDay() << "  " << "de Junio del" << "  " << dates[i].getYear() << "         |  " << *(line + x);
			x++;
			break; }
		case 7: {
			cout << dates[i].getDay() << "  " << "de Julio del" << "  " << dates[i].getYear() << "         |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Julio del" << "  " << dates[i].getYear() << "         |  " << *(line + x);
			archivo2 << dates[i].getDay() << "  " << "de Julio del" << "  " << dates[i].getYear() << "         |  " << *(line + x);
			x++;
			break; }
		case 8: {
			cout << dates[i].getDay() << "  " << "de Agosto del" << "  " << dates[i].getYear() << "        |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Agosto del" << "  " << dates[i].getYear() << "        |  " << *(line + x);
			archivo2 << dates[i].getDay() << "  " << "de Agosto del" << "  " << dates[i].getYear() << "        |  " << *(line + x);
			x++;
			break; }
		case 9: {
			cout << dates[i].getDay() << "  " << "de Septiembre del " << "  " << dates[i].getYear() << "   |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Septiembre del " << "  " << dates[i].getYear() << "   |  " << *(line + x);
			archivo2 << dates[i].getDay() << "  " << "de Septiembre del " << "  " << dates[i].getYear() << "   |  " << *(line + x);
			x++;
			break; }
		case 10: {
			cout << dates[i].getDay() << "  " << "de Octubre del" << "  " << dates[i].getYear() << "       |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Octubre del" << "  " << dates[i].getYear() << "       |  " << *(line + x);
			archivo2 << dates[i].getDay() << "  " << "de Octubre del" << "  " << dates[i].getYear() << "       |  " << *(line + x);
			x++;
			break; }
		case 11: {
			cout << dates[i].getDay() << "  " << "de Noviembre del" << "  " << dates[i].getYear() << "     |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Noviembre del" << "  " << dates[i].getYear() << "     |  " << *(line + x);
			archivo2 << dates[i].getDay() << "  " << "de Noviembre del" << "  " << dates[i].getYear() << "     |  " << *(line + x);
			x++;
			break; }
		case 12: {
			cout << dates[i].getDay() << "  " << "de Diciembre del" << "  " << dates[i].getYear() << "     |  " << *(line + x) << endl;
			archivo << dates[i].getDay() << "  " << "de Diciembre del" << "  " << dates[i].getYear() << "     |  " << *(line + x);
			archivo2 << dates[i].getDay() << "  " << "de Diciembre del" << "  " << dates[i].getYear() << "     |  " << *(line + x);
			x++;
			break; }
		}

	}

}

FechaAmortinadas OperationsAmortization::enter_Date()
{
	int day, month, year;
	Validate vdate;
	cout << " Ingrese la fecha de pago\n" << std::endl;
	cout << " \tIngrese el día ->";
	day = vdate.validate_R(); cout << "\n";
	cout << " \tIngrese el mes ->";
	month = vdate.validate_R(); cout << "\n";
	cout << " \tIngrese el año ->";
	year = vdate.validate_R(); cout << "\n";

	if (day > 0 && day < 32) {
		if (month > 0 && month < 13) {
			if (year > 2020) {
				if ((month == 1 && day < 32) || (month == 3 && day < 32) || (month == 4 && day < 31) || (month == 5 && day < 32) || (month == 6 && day < 31) || (month == 7 && day < 32) || (month == 8 && day < 32) || (month == 9 && day < 31) || (month == 10 && day < 32) || (month == 11 && day < 31) || (month == 12 && day < 31)) {
					FechaAmortinadas fecha(day, month, year);
					return fecha;
				}
				else if (month == 2) {
					if (day == 29) {
						if ((year % 4 == 0) && (year % 100 != 0)) {
							FechaAmortinadas fecha(day, month, year);
							return fecha;
						}
						else if (year % 400 == 0) {
							FechaAmortinadas fecha(day, month, year);
							return fecha;
						}
						else {
							cout << "Esa fecha no existe" << endl;
							enter_Date();
						}
					}
					else {
						FechaAmortinadas fecha(day, month, year);
						return fecha;
					}
				}
				else {
					cout << "Esa fecha no existe" << endl;
					enter_Date();
				}
			}
			else {
				cout << "Año no valido" << endl;
				enter_Date();
			}
		}
		else {
			cout << "Esa fecha no existe" << endl;
			enter_Date();
		}
	}
	else {
		cout << "Esa fecha no existe" << endl;
		enter_Date();
	}


}

bool OperationsAmortization::is_Leap(int year)//biciesto
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

bool OperationsAmortization::is_laborable(FechaAmortinadas date)
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

