//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de Calculadora
//  Fecha creación : 18 / 07 / 2021
//  Fecha de modificación : 23 / 07 / 2021  */
/**
*@file Apilation.h
*@version 1.0
*@date 29/07/2021
*@author Grupo 3
*@title Apilacion
*@brief funciones de utileria
*/
#pragma once
#include "Nodo.h"
#include <ctime>
#include <random>
#include <functional>
#include <iostream>
using namespace std;
template <class T>
class	Apilation
{
private:
	Nodo<T>* primero;
	Nodo<T>* actual;
public:
	/**
	 * @brief  pila vacia
	 * @return true
	 * @return false
	 */
	bool StackVacia();

	/**
	 * @brief Comprobar pila vacia
	 *
	 * @return true
	 * @return false
	 */
	bool empty_stack();

	Apilation<T>();

	/**
	 * @brief insertar por cola
	 *
	 */
	void insertar_por_la_cola(T);

	/**
	 * @brief set
	 */
	void set_primero(Nodo<T>*);

	/**
	 * @brief Get 
	 */
	Nodo<T>* get_primero();

	/**
	 * @brief Set
	 */
	void set_actual(Nodo<T>*);

	/**
	 * @brief Get 
	 */
	Nodo<T>* get_actual();

	/**
	 * @brief Insertar por cabezas
	 */
	void insertar_por_la_cabeza(T);

	/**
	 * @brief Borrar por cola
	 */
	void borrar_por_la_cola();

	/**
	 * @brief Borrar por cabeza
	 */
	void borrar_por_la_cabeza();

	/**
	 * @brief Mostrar
	 */
	void mostrar();

	/**
	 * @brief Ver Expresion
	 */
	void mostrar_expresion();

	/**
	 * @brief Mostrar Expresion Invetida
	 */
	void mostrar_expresion_invertida();

	/**
	 * @brief Llenar lista aleatorio
	 */
	void llenar_aleatorio_lista();

	/**
	 * @brief Vaciar 
	 */
	void vaciar_lista();


	T maximo_comun_divisor(T);

	T contar_elementos();

};

template<class T>
void Apilation<T>::mostrar()
{
	Nodo<T>* temporal = this->primero;
	while (temporal) {
		cout << temporal->get_dato() << " " << endl;
		temporal = temporal->get_siguiente();

	}
	cout << endl;
}
template<class T>
void Apilation<T>::mostrar_expresion()
{
	Nodo<T>* temporal = this->primero;
	while (temporal) {
		cout << temporal->get_dato() << " ";
		temporal = temporal->get_siguiente();

	}
	cout << endl;
}
template<class T>
void Apilation<T>::mostrar_expresion_invertida()
{
	Apilation<T> copia;
	Nodo<T>* temporal = this->primero;
	while (temporal) {
		//cout << temporal->get_dato() << " ";
		copia.insertar_por_la_cabeza(temporal->get_dato());
		temporal = temporal->get_siguiente();

	}
	temporal = copia.get_primero();
	while (temporal) {
		cout << temporal->get_dato() << " ";
		//copia.insertar_por_la_cabeza(temporal->get_dato());
		temporal = temporal->get_siguiente();

	}
	//copia.vaciar_lista();
	cout << endl;
}
template<class T>
void Apilation<T>::vaciar_lista() {
	while (StackVacia()) {
		borrar_por_la_cola();
	}
}
template<class T>
bool Apilation<T>::StackVacia()
{
	return (this->primero == NULL);
}
template<class T>
bool Apilation<T>::empty_stack()
{
	return (this->primero == NULL);
}
template<class T>
Apilation<T>::Apilation()
{
	this->primero = NULL;
	this->actual = NULL;
}
template<class T>
void Apilation<T>::insertar_por_la_cola(T val)
{
	Nodo<T>* nuevo = new Nodo<T>(val, NULL);
	if (StackVacia()) {
		this->primero = nuevo;
	}
	else {
		this->actual->set_siguiente(nuevo);
	}
	this->actual = nuevo;
}
template<class T>
void Apilation<T>::set_primero(Nodo<T>* new_primero) {
	this->primero = new_primero;
}
template<class T>
Nodo<T>* Apilation<T>::get_primero() {
	return primero;
}
template<class T>
void Apilation<T>::set_actual(Nodo<T>* new_actual) {
	this->actual = new_actual;
}
template<class T>
Nodo<T>* Apilation<T>::get_actual() {
	return actual;
}
template<class T>
void  Apilation<T>::insertar_por_la_cabeza(T val)
{
	Nodo<T>* nuevo = new Nodo<T>(val, NULL);

	if (StackVacia()) {
		this->actual = nuevo;
	}
	else {
		nuevo->set_siguiente(this->primero);
	}
	this->primero = nuevo;
}
template<class T>
void  Apilation<T>::borrar_por_la_cola()
{
	if (!StackVacia()) {
		Nodo<T>* temp = this->actual;
		Nodo<T>* temp1 = this->primero;
		while (temp1->get_siguiente()->get_siguiente() != NULL) {
			temp1 = temp1->get_siguiente();
		}
		temp1->set_siguiente(NULL);
		this->actual = temp1;
		free(temp);
	}
}
template<class T>
void  Apilation<T>::borrar_por_la_cabeza()
{
	if (!StackVacia()) {
		Nodo<T>* temp;
		temp = this->primero;
		this->primero = this->primero->get_siguiente();
		free(temp);
	}
}
template<class T>
void  Apilation<T>::llenar_aleatorio_lista()
{
	Nodo<T>* temp = this->primero;
	std::srand(std::time(nullptr));
	int aleatorio = 0;
	while (aleatorio != 5) {
		aleatorio = 1 + rand() % (6);
		if (aleatorio == 2 || aleatorio == 4) {
			insertar_por_la_cola(aleatorio);
		}
	}



}
template<class T>
T  Apilation<T>::maximo_comun_divisor(T elementos)
{
	int mcd = 0;
	int contador = 0;
	Nodo<T>* temporal = this->primero;
	for (int i = 1; i < 1000; i++) {
		contador = 0;
		temporal = this->primero;
		while (temporal) {

			if (temporal->get_dato() % i == 0) {

				contador = contador + 1;
			}
			temporal = temporal->get_siguiente();


		}

		if (elementos == contador) {
			mcd = i;
		}

	}

	return T(mcd);
}
template<class T>
T  Apilation<T>::contar_elementos()
{
	int elementos = 0;
	Nodo<T>* temporal = this->primero;
	while (temporal) {
		elementos = elementos + 1;
		temporal = temporal->get_siguiente();

	}
	return T(elementos);
}