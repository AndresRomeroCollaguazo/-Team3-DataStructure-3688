//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
//  Deber de Ordenamientos
//  Fecha creaci�n : 20 / 07 / 2021
//  Fecha de modificaci�n : 29 / 07 / 2021  */

#include"Control.h"
using namespace std;

int main()
{
    Control c;
    system("mode con: cols=110 lines=40"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
    system("COLOR B0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
    c.viewMenu();
}

