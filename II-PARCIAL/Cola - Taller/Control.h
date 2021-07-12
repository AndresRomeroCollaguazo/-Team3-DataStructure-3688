/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller
Fecha creación : 13 / 06 / 2021
Fecha de modificación : 21 / 06 / 2021 */
#pragma once


#include <iostream>
#include <windows.h>
#include <thread>
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13
/*
* @brief Clase Control que contiene el Menú del aplicativo
*/

class Control
{
public:
	/**
	  * @brief viewMenu Muestrael menu
	  * @param void
	  */
	static void viewMenu(void);//menu
	/**
	  * @brief gotoxy Mueve el cursor tipo flecha
	  * @param x, y Coordenadas de ubicacion de la flecha
	  */
	int gotoxy(USHORT x, USHORT y);
	/**
	  * @brief useMenu Despliega las opciones que contiene el Menu
	  * @param titulo, opciones Son los nombres de las opciones que contiene el Menu
	  */
	int useMenu(const char titulo[], const char* opciones[], int n);
	/**
	  * @brief onlyIntControl Valida los numeros enteros ingresados desde teclado
	  * @param char Solo admite numeros
	  */
	char* onlyIntControl(const char*);//validacion enteros
	/**
	  * @brief onlyCharControl Permite que el cursos se mueva de arriba hacia abajo
	  * @param void
	  */
	char onlyCharControl(void);//sube baja 

	static void marquesina();

	static void activar();

protected:
private:

};