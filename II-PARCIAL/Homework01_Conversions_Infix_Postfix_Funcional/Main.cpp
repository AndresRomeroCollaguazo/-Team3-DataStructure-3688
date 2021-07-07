/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
** Deber de Notaciones y cambios a Infija, Prefija y Funcional.
** Fecha creación : 02 / 07 / 2021
** Fecha de modificación : 05 / 07 / 2021 
*********************************************************************************************/

#include "Lista.h"
#include "Prefijo.h"
#include "Postfijo.h"
#include "Funcional.h"
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include<stdlib.h>
#include<windows.h>

using namespace std;

int main()
{
    system("mode con: cols=80 lines=45"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
    system("color 9F");
    Lista lst;
    Prefijo pre;
    Postfijo pos;
    Funcional fun;
    string prueba;
    char seguir;
    do
    {

        cout << "\n   Ingresa una Expresion Infija " << "\n";
        cin >> prueba;
        cout << "   De la infija " << prueba << "\n\n";
        pre.convertir(prueba);
        pos.convertir(prueba);
        fun.convertir(prueba);
        cout << "\n";

        cout << "\n   Desea introducir otro numero (s/n)?: ";
        cin >> seguir;
    } while (seguir != 'n');
    
    /*
    string prueba2 = "a+b+c+d";
    cout << "De la infija " << prueba2 << "\n";
    pre.convertir(prueba2);
    pos.convertir(prueba2);
    fun.convertir(prueba2);
    cout << "\n";
    string prueba3 = "x+z(a+z)^h";
    cout << "De la infija " << prueba3 << "\n";
    pre.convertir(prueba3);
    pos.convertir(prueba3);
    fun.convertir(prueba3);*/
    return 0;

}
