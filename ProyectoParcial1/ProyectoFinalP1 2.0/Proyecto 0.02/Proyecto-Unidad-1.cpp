#include"Control.h"
#include "Lista.h"
using namespace std;


int main()
{
    Lista* cuentas = new Lista();
    Control c;

    system("mode con: cols=110 lines=40"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
    system("COLOR B0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS

    c.viewMenu(cuentas);
}