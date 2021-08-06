/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Proyecto Diccionario Ingles-Español
Fecha creación: 20/07/2021
Fecha de modificación: 31/07/2021 */
#pragma once
#include <string>

using namespace std;
/**
	  * @brief Clase IngresoDatos que contiene validaciones de ingreso
	  */

class IngresoDatos
{

private:

	string text;


public:
	/**
	  * @brief IngresoTexto valida para que solo se pueda ingresar texto
	  * @param mensaje mensaje de tipo string a imprimir
	  * @return string retorna el mensaje introducido desde teclado
	  */
	string IngresoTexto(string mensaje = "Ingrese texto:");
	/**
	  * @brief IngresoTexto valida para que solo se pueda ingresar texto
	  * @param mensaje mensaje de tipo string a imprimir
	  * @return string retorna el mensaje introducido desde teclado
	  */
	string IngresoTexto1(string mensaje = "Ingrese texto:");
	/**
	  * @brief IngresoNumero valida para que solo se pueda ingresar numeros
	  * @param mensaje mensaje de tipo string a imprimir
	  * @return string retorna el mensaje introducido desde teclado
	  */
	string IngresoNumero(string mensaje = "Ingrese numeros:");
	/**
	  * @brief validarCedula valida para que solo se pueda ingresar cedulas validas
	  * @param dato string de la cedula a validar
	  * @return bool retorna el argumento de verdad de dicha validacion
	  */
	bool validarCedula(string dato);
	/**
	  * @brief suma suma el contenido de la cadena de enteros
	  * @param int* cadena de enteros a sumar
	  * @return int suma de la cadena completa
	  */
	int suma(int[]);
	/**
	  * @brief anioBiciesto valida para que solo se pueda ingresar anios biciestos
	  * @param int año a comprobar
	  * @return bool retorna el argumento de verdad de dicha validacion
	  */
	bool anioBisiesto(int);

};