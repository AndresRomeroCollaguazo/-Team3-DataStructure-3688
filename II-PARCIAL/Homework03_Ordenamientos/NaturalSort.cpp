//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de Ordenamientos
//  Fecha creación : 20 / 07 / 2021
//  Fecha de modificación : 29 / 07 / 2021  */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NaturalSort.h"
/*
void NaturalSort::mostrar(FILE *fich)
{
    char* linea = new char[128];
    rewind(fich);
    fgets(linea, 128, fich);
    while(!feof(fich)) {
        puts(linea);
        fgets(linea, 128, fich);
    }
}

void NaturalSort::mezcla(FILE *fich)
{
   int ordenado;
   FILE *aux[2];

   do {
      aux[0] = fopen("C:\\Users\\jrome\\OneDrive\\Escritorio\\Proyectos - Estructura\\Homework03_Ordenamientos (1)", "w+");
      aux[1] = fopen("C:\\Users\\jrome\\OneDrive\\Escritorio\\Proyectos - Estructura\\Homework03_Ordenamientos (1)", "w+");
      rewind(fich);
      separar(fich, aux);
      rewind(*(aux+0));
      rewind(*(aux+1));
      rewind(fich);
      ordenado = mezclar(fich, aux);
      fclose(*(aux+0));
      fclose(*(aux+1));
   } while(!ordenado);
   remove("C:\\Users\\jrome\\OneDrive\\Escritorio\\Proyectos - Estructura\\Homework03_Ordenamientos (1)\\aux1.txt");
   remove("C:\\Users\\jrome\\OneDrive\\Escritorio\\Proyectos - Estructura\\Homework03_Ordenamientos (1).txt");
}

void NaturalSort::separar(FILE *fich, FILE **aux)
{
   char linea[128], anterior[2][128];
   int salida = 0;
   strcpy(*(anterior+0), "");
   strcpy(*(anterior+1), "");
   fgets(linea, 128, fich);
   while(!feof(fich)) {
      if(salida == 0 && strcmp(linea, *(anterior+0)) < 0) salida = 1;
      else if(salida == 1 && strcmp(linea, *(anterior+1)) < 0) salida = 0;
      strcpy(*(anterior+salida), linea);
      fputs(linea, *(aux+salida));
      fgets(linea, 128, fich);
   }
}

int NaturalSort::mezclar(FILE *fich, FILE **aux)
{
   char ultima[128], linea[2][128], anterior[2][128];
   int entrada;
   int tramos = 0;

   fgets(*(linea+0), 128, *(aux+0));
   fgets(*(linea+1), 128, *(aux+1));
   strcpy(ultima, "");
   strcpy(*(anterior+0), "");
   strcpy(*(anterior+1), "");
   while(!feof(*(aux+0)) && !feof(*(aux+1))) {
      if(strcmp(*(linea+0), *(linea+1)) <= 0) entrada = 0; else entrada = 1;
      strcpy(*(anterior+entrada), *(linea+entrada));
      fputs(*(linea+entrada), fich);
      fgets(*(linea+entrada), 128, *(aux+entrada));
      if(strcmp(*(anterior+entrada), *(linea+entrada)) > 0) {
         if(!entrada) entrada = 1; else entrada = 0;
         tramos++;
         do {
            strcpy(*(anterior+entrada), *(linea+entrada));
            fputs(*(linea+entrada), fich);
            fgets(*(linea+entrada), 128, *(aux+entrada));
         } while(!feof(*(aux+entrada)) && strcmp(*(anterior+entrada), *(linea+entrada)) <= 0);
      }
   }

   if(!feof(*(aux+0))) tramos++;
   while(!feof(*(aux+0))) {
      fputs(*(linea+0), fich);
      fgets(*(linea+0), 128, *(aux+0));
   }
   if(!feof(*(aux+1))) tramos++;
   while(!feof(*(aux+1))) {
      fputs(*(linea+1), fich);
      fgets(*(linea+1), 128, *(aux+1));
   }
   return(tramos == 1);
}*/