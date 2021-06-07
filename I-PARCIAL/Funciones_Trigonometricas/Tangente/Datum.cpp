/ *Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Funciones Trigonometricas
Fecha creación : 06 / 04 / 2021
Fecha de modificación : 06 / 06 / 2021 * /

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

