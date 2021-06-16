/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Listas
Fecha creación : 13 / 06 / 2021
Fecha de modificación : 15 / 06 / 2021 */
*/
#include "Nodo.h"

Nodo::Nodo(int _value) {
	this->value = _value;
}

Nodo* Nodo::getPrevious() {
	return previous;
}

void Nodo::setPrevious(Nodo* _nodo) {
	this->previous = _nodo;
}

Nodo* Nodo::getNext() {
	return next;
}

void Nodo::setNext(Nodo* _nodo) {
	this->next = _nodo;
}

int Nodo::getValue() {
	return value;
}
void Nodo::setValue(int _value) {
	this->value = _value;
}
