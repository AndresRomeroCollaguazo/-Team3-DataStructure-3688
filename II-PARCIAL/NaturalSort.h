//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de Ordenamientos
//  Fecha creación : 20 / 07 / 2021
//  Fecha de modificación : 29 / 07 / 2021  */
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

