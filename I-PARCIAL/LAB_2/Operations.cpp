/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados 
Fecha creación: 26/05/2021
Fecha de modificación: 27/05/2021 */

#include "Operations.h"
Operations::Operations(Data<float> new_datum){
	this->data_set = new_datum;
}

float Operations::operator +() {
			return float(this->data_set.get_Datum_A())+float(this->data_set.get_Datum_B());
		
}

float Operations::operator -(){
			return float(this->data_set.get_Datum_A())-float(this->data_set.get_Datum_B());
}



