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



