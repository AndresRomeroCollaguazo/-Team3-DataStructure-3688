/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Listas
Fecha creación : 13 / 06 / 2021
Fecha de modificación : 15 / 06 / 2021 */

#include "Double_linked_list.h"
#include <iostream>

void Double_linked_list::insertToTail(int _valor) {
	Nodo* nuevo = new Nodo(_valor);
	if (emptyList())
	{
		this->head = nuevo;
		size++;
		return;
	}
	Nodo* ultimo = ultimo_Nodo();
	ultimo->setNext(nuevo);
	nuevo->setPrevious(ultimo);
	
}
void Double_linked_list::insertToHead(int _valor) {
	Nodo* nuevo = new Nodo(_valor);
	
	if (emptyList())
	{
		this->head = nuevo;
		
		size++;
		return;
	}
	head->setPrevious(nuevo);
	nuevo->setNext(head);
	this->head = nuevo;
	
	

}
void Double_linked_list::deleteL() {

	Nodo* final = ultimo_Nodo();
	Nodo* ant = final->getPrevious();
	ant->setNext(NULL);
	final->setPrevious(NULL);
	//final = ant;
	free(final);
}
void Double_linked_list::insertMiddle(int _valor, int pos) {
	Nodo* nuevo = new Nodo(_valor);

	if (emptyList())
	{
		this->head = nuevo;
		size++;
		return;
	}
	if (pos <= 0)
	{
		insertToHead(_valor);
		return;
	}

	Nodo* temp = head;
	int cont = 0;
	while (temp != NULL && cont != pos) {
		temp = temp->getNext();
		cont++;
		if (cont == pos)
		{
			Nodo* ant = temp->getPrevious();
			ant->setNext(nuevo);
			nuevo->setNext(temp);
			nuevo->setPrevious(ant);
		}
		else if (cont > pos)
		{
			insertToTail(_valor);
		}
	}
}
void Double_linked_list::consult(int pos) {
	

	if (emptyList())
	{
		std::cout << "La lista esta vacia " << std::endl;
		
		return;
	}

	Nodo* temp = head;
	int cont = 0;
	if (pos == 0)
	{
		std::cout << "La posicion " << pos << "\ntiene el valor -> " << head->getValue() << std::endl;
		return;
	}
	while (temp != NULL && cont != pos) {
		temp = temp->getNext();
		cont++;

		if (cont==0)
		{
			std::cout << "La posicion " << pos << "\ntiene el valor -> " << temp->getValue() << std::endl;
			return;
		}
		else if (cont == pos)
		{
			std::cout << "La posicion " <<pos<<"\ntiene el valor -> "<<temp->getValue()<< std::endl;
		}
		
	}
	if (pos > cont)
	{
		std::cout << "La lista aun no tiene esa posicion " << std::endl;
	}
}

void Double_linked_list::imprimir(std::function<void(int, int)>callback) {
	Nodo* temp = head;
	int indice = 0;
	while (temp != NULL)
	{
		callback(temp->getValue(), indice++);
		temp = temp->getNext();
	}
}
bool Double_linked_list::emptyList() {
	return (this->head == NULL);
}
Nodo* Double_linked_list::ultimo_Nodo() {
	Nodo* temp = head;
	while (temp->getNext() != NULL) {
		temp = temp->getNext();
	}
	return temp;
}
