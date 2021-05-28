#include "Operaciones.h"




Operaciones::Operaciones(Datos<float> newdatos){
	this->datoConjunto = newdatos;
}

float Operaciones::operator +() {
			return float(this->datoConjunto.getDatoA())+float(this->datoConjunto.getDatoB());
			
}

float Operaciones::operator -(){
			return float(this->datoConjunto.getDatoA())-float(this->datoConjunto.getDatoB());
}


		