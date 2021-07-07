/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
** Deber de Notaciones y cambios a Infija, Prefija y Funcional.
** Fecha creación : 02 / 07 / 2021
** Fecha de modificación : 05 / 07 / 2021
*********************************************************************************************/

#pragma once
#include "Nodo.h"

class Lista
{
public:
	Lista();
	~Lista();
	/**
	  * @brief insertarInicio Retorna los datos ingresados por la cabeza
	  * @param _value Numeros a insertar
	  * @return Devuelve los datos ingresados en la lista a traves de la cabeza
	  */
	void insertarInicio(char);
	/**
	  * @brief mostrar Muestra los datos ingresados o eliminados
	  * @param
	  * @return Devuelve los datos ingresados o eliminados de la lista
	  */
	void mostrar(void);
	/**
	  * @brief top consulta el dato que esta al inicio de la pila
	  * @param
	  * @return Devuelve el dato consultado
	  */
	char top();
	/**
	  * @brief listaVacia vacia la carga de los datos ingresados o eliminados
	  * @param
	  * @return Devuelve los lista vacia
	  */
	bool listaVacia();
	/**
	  * @brief eliminar Elimina el dato ingresado
	  * @param
	  * @return Devuelve los datos eliminados en la lista a traves de la cabeza
	  */
	void eliminar();

private:

	Nodo* cabeza;

};
