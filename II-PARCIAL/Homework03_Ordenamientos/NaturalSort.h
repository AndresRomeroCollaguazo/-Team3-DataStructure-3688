//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
//  Deber de Ordenamientos
//  Fecha creaci�n : 20 / 07 / 2021
//  Fecha de modificaci�n : 29 / 07 / 2021  */
/**
*@file NaturalSort.h
*@version 1.0
*@date 29/07/2021
*@author Grupo 3
*@title Ordenamiento por Natural Sort
*@brief funciones de utileria
*/
#pragma once 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
class NaturalSort
{
private:
    
public:
    /**
      * @brief mostrar
      */
    void mostrar(FILE *fich);
    /**
      * @brief mmezcla
      */
    void mezcla(FILE *fich);
    /**
      * @brief separar
      */
    void separar(FILE *fich, FILE **aux);
    /**
      * @brief mesclar
      */
    int mezclar(FILE *fich, FILE **aux);
};

