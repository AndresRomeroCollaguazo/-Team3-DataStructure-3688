/ * Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados 
Fecha creación: 26/05/2021
Fecha de modificación: 27/05/2021 * /
#include "Operations.h"
Operations::Operaciones(Date<float> newdatum){
	this->data_set = newdate;
}

float Operations::operator +() {
			return float(this->data_set.getDataA())+float(this->data_set.getDataB());
		
}

float Operations::operator -(){
			return float(this->data_set.getDataA())-float(this->data_set.getDataB());
}



