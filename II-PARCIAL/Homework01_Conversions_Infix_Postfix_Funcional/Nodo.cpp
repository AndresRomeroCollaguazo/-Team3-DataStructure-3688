/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
** Deber de Notaciones y cambios a Infija, Prefija y Funcional.
** Fecha creación : 02 / 07 / 2021
** Fecha de modificación : 05 / 07 / 2021
*********************************************************************************************/

#include "Nodo.h"
#include <cstddef>

int Nodo::getValor(void)
{
	return valor;
}

void Nodo::setValor(char newValor)
{
	valor = newValor;
}

void* Nodo::getSiguiente() {
	return siguiente;
}

void Nodo::setSiguiente(Nodo* siguiente) {
	this->siguiente = siguiente;
}

Nodo::~Nodo()
{
	// TODO : implement
}

Nodo::Nodo() {}

Nodo::Nodo(char val, Nodo* sig = NULL)
{
	this->valor = val;
	this->siguiente = sig;
}