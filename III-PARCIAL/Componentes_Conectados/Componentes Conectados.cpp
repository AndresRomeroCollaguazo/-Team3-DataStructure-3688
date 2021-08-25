//                   * Universidad de las Fuerzas Armadas "ESPE"
//   Software
//   Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//   Deber de Componentes Conectados
//   Fecha creación: 23/08/2021
//   Fecha de modificación: 24/08/2021 * /#include "Control.h"
#include <iostream>

int main()
{
    Control c;
    system("mode con: cols=110 lines=40"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
    system("COLOR B0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
    c.viewMenu();
}
