/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
** Proyecto Reinas
** Fecha creaci�n : 21 / 07 / 2021
** Fecha de modificaci�n : 24 / 07 / 2021
*********************************************************************************************/
#pragma once
/**
  * @brief Clase Ingreso que contiene validaciones y datos de ingreso
  */
class Ingreso{
    public:
	/**
	  * @brief ingreso valida para que solo se pueda ingresar numeros
	  * @return retorna el mensaje introducido desde teclado
	  */
    int ingreso();
	/**
	  * @brief validateInt valida para que solo se pueda ingresar numeros validas
	  * @return int retorna el argumento de verdad de dicha validacion
	  */
    int validateInt();
private:
};