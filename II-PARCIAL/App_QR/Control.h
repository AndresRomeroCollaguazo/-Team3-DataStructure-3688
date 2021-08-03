//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
//  Deber de QR
//  Fecha creaci�n : 1 / 07 / 2021
//  Fecha de modificaci�n : 3 / 07 / 2021  */
/**
*@file Control.h
*@version 1.0
*@date 3/07/2021
*@author Grupo 3
*@title Menu
*@brief funciones de utileria
*/
#pragma once

#include <iostream>
#include <windows.h>
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13
#if !defined(__UML_Class_Diagram_2_Control_h)
#define __UML_Class_Diagram_2_Control_h
/**
	  * @brief Clase Control que contiene el Menu del aplicativo
	  */
class Control
{
public:
	/**
	  * @brief viewMenu Muestrael menu
	  * @param void
	  */
	void viewMenu();//menu
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
	int useMenu2(const char titulo[], const char* admin[], int n2);
	/**
	  * @brief onlyIntControl Valida los numeros enteros ingresados desde teclado
	  * @param char Solo admite numeros
	  */
	int useMenu3(const char titulo[], const char* user[], int n3);
	/**
	  * @brief onlyIntControl Valida los numeros enteros ingresados desde teclado
	  * @param char Solo admite numeros
	  */
	int onlyIntControl(const char*);//validacion enteros
	/**
	  * @brief onlyCharControl Permite que el cursos se mueva de arriba hacia abajo
	  * @param void
	  */
	char onlyCharControl(void);//sube baja 
	/**
	  * @brief dibujarCuadro Permite que el se cree un marco al rededor de la ventana de ejecucion
	  * @param void
	  */
	void dibujarCuadro(int x1, int y1, int x2, int y2);
	/**
	  *@brief gotoxy Mueve el contemnido
	  * @param x, y Coordenadas de ubicacion en la ventana
	  */
	void gotoxyS(int x, int y);

protected:
private:

};

#endif