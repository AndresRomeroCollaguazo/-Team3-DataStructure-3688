/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
** Deber de Notaciones y cambios a Infija, Prefija y Funcional.
** Fecha creaci�n : 02 / 07 / 2021
** Fecha de modificaci�n : 05 / 07 / 2021
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