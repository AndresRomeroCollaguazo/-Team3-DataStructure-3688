/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
** Proyecto Reinas
** Fecha creación : 21 / 07 / 2021
** Fecha de modificación : 24 / 07 / 2021
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