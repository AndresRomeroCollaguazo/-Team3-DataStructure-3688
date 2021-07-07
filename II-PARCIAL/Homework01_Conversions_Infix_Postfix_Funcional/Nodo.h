/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
** Deber de Notaciones y cambios a Infija, Prefija y Funcional.
** Fecha creaci�n : 02 / 07 / 2021
** Fecha de modificaci�n : 05 / 07 / 2021
*********************************************************************************************/

#pragma once
/**
  * @brief Clase Nodo que contiene un nodo de los mismos y dato de tipo int
  */
class Nodo
{
public:
	/**
	  * @brief getValue Recibe el contenido del atributo newValue
	  * @param newValue coloca un nuevo dato en el atributo
	  */
	int getValor();
	/**
	  * @brief setValue Devuelve el contenido del atributo value
	  * @return Devuelve el atributo value
	  */
	void setValor(char newValor);
	/**
	  * @brief getNext Recibe el contenido del atributo newNext
	  * @param newNext coloca un nuevo dato en el atributo
	  */
	void* getSiguiente();
	/**
	  * @brief setNext Devuelve el contenido del atributo next
	  * @return Devuelve el atributo next
	  */
	void setSiguiente(Nodo* siguiente);
	/**
	  * @brief Nodo() genera un constructor vacio
	  * @return constructor
	  */
	Nodo();
	/**
	  * @brief ~Nodo() genera un destructor para liberar memoria
	  * @return destructor
	  */
	~Nodo();
	/**
	  * @brief Nodo() genera un constructor con un caracter y un nodo
	  * @return devulve los ostrivutos val y *sig
	  */
	Nodo(char val, Nodo* sig);
	
	
	Nodo* siguiente;
	char valor;

};
