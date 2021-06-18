/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Taller de Operadores Sobrecargados
Fecha creaci�n: 26/05/2021
Fecha de modificaci�n: 27/05/2021 */

#include "Operations.h"
Operations::Operations(Data<float> new_datum) {
	this->data_set = new_datum;
}

float Operations::operator +() {
	return float(this->data_set.get_Datum_A()) + float(this->data_set.get_Datum_B());

}

float Operations::operator -() {
	return float(this->data_set.get_Datum_A()) - float(this->data_set.get_Datum_B());
}

