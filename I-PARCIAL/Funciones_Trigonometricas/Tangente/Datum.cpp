/ *Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Funciones Trigonometricas
Fecha creaci�n : 06 / 04 / 2021
Fecha de modificaci�n : 06 / 06 / 2021 * /

#include"Datum.h"
double Datum:: getDatum(void) {
	return datum;
}
void Datum:: setDatum(double newDatum) {
	datum = newDatum;
}
Datum::Datum(double _datum) {
	this->datum = _datum;
}
Datum::~Datum() {

}

