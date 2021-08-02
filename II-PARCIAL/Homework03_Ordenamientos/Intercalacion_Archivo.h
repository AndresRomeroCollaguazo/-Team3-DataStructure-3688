//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
//  Deber de Ordenamientos
//  Fecha creaci�n : 20 / 07 / 2021
//  Fecha de modificaci�n : 29 / 07 / 2021  */
/**
*@file Intercalacion_Archivo.h
*@version 1.0
*@date 29/07/2021
*@author Grupo 3
*@title Ordenamiento por Intercalacion 
*@brief funciones de utileria
*/
#pragma once
#include <fstream>

#include "Vector.h"
class Intercalacion {
private:
	/**
	  * @brief  abrir archivo
	  * @param nom
	  * @param tip
	  */
	void abrir(std::fstream* f, char* nom, int tip = 1);
	/**
	  * @brief cerrar archivo
	  */
	void cerrar(std::fstream* f);
public:
	/**
	  * @brief limpiar
	  * @param void
	  */
	void limpiar();
	/**
	  * @brief haydatos
	  * @param nom
	  */
	bool hayDatos(char* nom);
	/**
	  * @brief mostrar
	  * @param nom
	  */
	void mostrar(char* nom);
	/**
	  * @brief insertar
	  * @param nom
	  * @param tam
	  */
	void insertar(Vector<int>& v, char* nom,int tam);
	/**
	  * @brief ordenar
	  */
	void ordenar();
};