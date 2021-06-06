// SenoRecursividad.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Funciones Trigonometricas
Fecha creación: 04/06/2021
Fecha de modificación: 06/06/2021 */
#include <iostream>
#include"Datum.h"
#include"Operation.h"
using namespace std;

int main()
{
    int n=5;
    double x;
    cout << "Digite el valor de x de la funcion sen(x): ";
    cin >> x;
    Datum dat(x);
    Operation op;
    cout << "El resultado de sen de x en rad es: ";
    cout << op.seno(dat, n) << endl;

    return 0;
}


// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
