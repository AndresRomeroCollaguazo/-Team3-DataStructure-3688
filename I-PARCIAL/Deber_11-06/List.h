/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Listas
Fecha creación: 09/06/2021
Fecha de modificación: 10/06/2021 */
/**
  * @file List.h
  * @version 1.0
  * @date 10-06-2021
  * @author Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
  * @brief listas
  * @title Lista
  *
  */
#pragma once
/***********************************************************************
 * Module:  List.h
 * Author:
 * Modified: miÃ©rcoles, 09 de junio de 2021 19:50:15
 * Purpose: Declaration of the class List
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_2_List_h)
#define __UML_Class_Diagram_2_List_h

class Nodo;
/**
	   * @brief Clase Lista que contiene el primer y actual nodo
	   */
class List
{
public:
	/**
	  * @brief insertToHead Retorna los datos ingresados por la cabeza
	  * @param _value Numeros a insertar
	  * @return Devuelve los datos ingresados en la lista a traves de la cabeza
	  */
	void insertToHead(int _value);
	/**
	  * @brief insertToTail Retorna los datos ingresados por la cola
	  * @param _value Numeros a insertar
	  * @return Devuelve los datos ingresados en la lista a traves de la cola
	  */
	void insertToTail(int _value);
	/**
	  * @brief deleteToHead Elimina los datos ingresados por la cabeza
	  * @param 
	  * @return Devuelve los datos eliminados en la lista a traves de la cabeza
	  */
	void deleteToHead(void);
	/**
	  * @brief deleteToTail Elimina los datos ingresados por la cola
	  * @param
	  * @return Devuelve los datos eliminados en la lista a traves de la cola
	  */
	void deleteToTail(void);
	/**
	  * @brief printList Muestra los datos ingresados o eliminados 
	  * @param
	  * @return Devuelve los datos ingresados o eliminados de la lista
	  */
	void printList(void);
	/**
	  * @brief getActual Devuelve el contenido del atributo  newActual
	  * @return Devuelve el atributo  newActual
	  */
	Nodo* getActual(void);
	/**
	  * @brief setActual Recibe el contenido del atributo newActual
	  * @param newActual coloca un nuevo dato en el atributo
	  */
	void setActual(Nodo* newActual);
	/**
	  * @brief  getFirst Devuelve el contenido del atributo   newFirst
	  * @return Devuelve el atributo  newFirst
	  */
	Nodo* getFirst(void);
	/**
	  * @brief setFirst Recibe el contenido del atributo newFirst
	  * @param newFirst coloca un nuevo dato en el atributo
	  */
	void setFirst(Nodo* newFirst);
	/**
  * @brief Constructor de la clase List
  */
	List();
	/**
	  * @brief Destructor de la clase List
	  */
	~List();

	Nodo* nodo;

protected:
private:
	bool emplyList(void);

	Nodo* first;
	Nodo* actual;


};

#endif
