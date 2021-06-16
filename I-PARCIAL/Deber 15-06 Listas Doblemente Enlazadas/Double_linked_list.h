/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Listas
Fecha creación : 13 / 06 / 2021
Fecha de modificación : 15 / 06 / 2021 */
/**
/ **
  *@file Lista_doble_enlazada.h
  * @version 1.0
  * @fecha 15 - 06 - 2021
  * @autor Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
  * @brief listasDobles
  * @title Lista Dobles
  */
#pragma once
#include "Nodo.h"
#include <functional>
/**
  * @brief Clase ListaDobleEnlazada que contiene el primer y actual nodo
  */
class Double_linked_list {
public:
	Double_linked_list() = default;
	/**
	  * @brief insertToHead Retorna los datos ingresados por la cabeza
	  * @param _value Numeros a insertar
	  * @return Devuelve los datos ingresados en la lista a traves de la cabeza
	  */
	void insertToHead(int);
	/**
	  * @brief insertToTail Retorna los datos ingresados por la cola
	  * @param _value Numeros a insertar
	  * @return Devuelve los datos ingresados en la lista a traves de la cola
	  */
	void insertToTail(int);
	/**
	  * @brief  insertMiddle Inserta elementos entre posiciones
	  * @param _value posicion
	  * @parum _value2 numero
	  * @return 
	  */
	void insertMiddle(int,int);
	/**
	  * @brief consultar consulta los datos
	  * @param
	  * @return Devuelve los datos consultados
	  */
	void consult(int);
	/**
	  * @brief deleteL Elimina el dato ingresado 
	  * @param
	  * @return Devuelve los datos eliminados en la lista a traves de la cabeza
	  */
	void deleteL();
	/**
	  * @brief emptyList vacia la carga de los datos ingresados o eliminados
	  * @param
	  * @return Devuelve los lista vacia
	  */
	bool emptyList();
	/**
	  * @brief printList Muestra los datos ingresados o eliminados
	  * @param
	  * @return Devuelve los datos ingresados o eliminados de la lista
	  */
	void imprimir(std::function<void(int,int)>callback);
private:
	Nodo* ultimo_Nodo();
	Nodo* head = nullptr;
	int size = 0;
};
