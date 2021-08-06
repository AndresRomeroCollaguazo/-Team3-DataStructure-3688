/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Deber de Listas
Fecha creaci�n: 09/06/2021
Fecha de modificaci�n: 10/06/2021 */
/**
  * @file Control.h
  * @version 1.0
  * @date 10-06-2021
  * @author Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
  * @brief listas
  * @title Lista
  *
  */
#pragma once
/***********************************************************************
 * Module:  Control.h
 * Author:
 * Modified: mi�rcoles, 09 de junio de 2021 18:38:18
 * Purpose: Declaration of the class Control
 ***********************************************************************/
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
	void viewMenu(void);//menu
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
	void dibujarCuadro(int x1, int y1, int x2, int y2);

protected:
private:

};

#endif