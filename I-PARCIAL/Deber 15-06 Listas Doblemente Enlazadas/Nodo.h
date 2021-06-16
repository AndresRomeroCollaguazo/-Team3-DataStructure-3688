/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Listas
Fecha creación : 13 / 06 / 2021
Fecha de modificación : 15 / 06 / 2021 */
/**
  *@file Nodo.h
  * @version 1.0
  * @fecha 15 - 06 - 2021
  * @autor Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
  * @brief listasDobles
  * @title Lista Dobles
  *
  */
#pragma once
/**
  * @brief Clase Nodo que contiene un nodo de los mismos y dato de tipo int
  */
class Nodo {
public:
	Nodo(int);
	Nodo* getNext();
	/**
	  * @brief getNext Recibe el contenido del atributo newNext
	  * @param newNext coloca un nuevo dato en el atributo
	  */
	void setNext(Nodo*);
	/**
	  * @brief setNext Devuelve el contenido del atributo next
	  * @return Devuelve el atributo next
	  */
	Nodo* getPrevious();
	/**
	  * @brief getPrevious Recibe el contenido del atributo newPrevious
	  * @param newPrevious coloca un nuevo dato en el atributo
	  */
	void setPrevious(Nodo*);
	/**
	  * @brief setPrevious Devuelve el contenido del atributo previous
	  * @return Devuelve el atributo previous
	  */
	int getValue();
	/**
	  * @brief getValue Recibe el contenido del atributo newValue
	  * @param newValue coloca un nuevo dato en el atributo
	  */
	void setValue(int);
	/**
	  * @brief setValue Devuelve el contenido del atributo value 
	  * @return Devuelve el atributo value 
	  */
private:
	int value;
	Nodo* next = nullptr;
	Nodo* previous =nullptr;
};
