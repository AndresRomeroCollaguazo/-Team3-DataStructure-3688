/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Listas
Fecha creación: 09/06/2021
Fecha de modificación: 10/06/2021 */
/**
  * @file Nodo.h
  * @version 1.0
  * @date 10-06-2021
  * @author Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
  * @brief listas
  * @title Lista
  *
  */
#pragma once
#pragma once
#include <cstddef>

/*************************
 * Module:  Nodo.h
 * Author:
 * Modified: miÃ©rcoles, 09 de junio de 2021 19:54:24
 * Purpose: Declaration of the class Nodo
 *************************/

#if !defined(__UML_Class_Diagram_2_Nodo_h)
#define __UML_Class_Diagram_2_Nodo_h
 /**
	   * @brief Clase Nodo que contiene un nodo de los mismos y dato de tipo int
	   */
class Nodo
{
public:
	/**
	  * @brief Destructor de la clase Nodo
	  */
	~Nodo();
	/**
	  * @brief getDate Devuelve el contenido del atributo next
	  * @return Devuelve el atributo next
	  */
	int getDate(void);
	/**
	  * @brief setDate Recibe el contenido del atributo newDate
	  * @param newDate coloca un nuevo dato en el atributo
	  */
	void setDate(int newDate);
	/**
	  * @brief getNext Devuelve el contenido del atributo next
	  * @return Devuelve el atributo next
	  */
	Nodo* getNext(void);
	/**
	  * @brief setNext Recibe el contenido del atributo newNext
	  * @param newNext coloca un nuevo dato en el atributo
	  */
	void setNext(Nodo* newNext);
	/**
	  * @brief Constructor de la clase Nodo
	  * @param value atributo nuevo del objeto
	  */
	Nodo(int value);


protected:
private:
	int date;
	Nodo* next;


};

#endif
