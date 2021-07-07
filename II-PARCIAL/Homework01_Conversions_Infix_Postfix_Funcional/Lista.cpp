/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
** Deber de Notaciones y cambios a Infija, Prefija y Funcional.
** Fecha creación : 02 / 07 / 2021
** Fecha de modificación : 05 / 07 / 2021
*********************************************************************************************/

#include "Lista.h"
#include <cstddef>
#include "Nodo.h"
#include <iostream>

using namespace std;

Lista::Lista()
{
	this->cabeza = NULL;
}

bool Lista::listaVacia() {
	return (this->cabeza == NULL);
}

void Lista::insertarInicio(char val)
{
	Nodo* tmp = new Nodo(val, NULL);
	tmp->siguiente = this->cabeza;
	this->cabeza = tmp;
}
void Lista::eliminar()
{
		Nodo* tmp = this->cabeza;
		if (tmp != NULL)
		{
			this->cabeza = this->cabeza->siguiente;
			delete(tmp);
		}
		return;
	
}
void Lista::mostrar(void)
{
	Nodo* tmp = this->cabeza;
	while (tmp != NULL) {
		cout << tmp->valor << "->";
		tmp = tmp->siguiente;
	}
	cout << "NULL\n" << endl;
}
char Lista::top()
{
	Nodo* tmp = this->cabeza;
	if (tmp != NULL)
		return tmp->valor;

}
Lista::~Lista()
{

}