/***********************************************************************/
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/
/***********************************************************************/
#include <iostream>
#include "MethodsHP.h"
#include "OperatorHP.h"


int main()
{
    float x = 10.5f;
    double y = 12.75;
    int z = 6;

    MethodsHP methods(x, y, z);
    OperatorHP ophp(methods);
    printf("\n La suma es %.2f", methods.addition(x));
    printf("\n La suma es %.2f", methods.addition(y, x));
    printf("\n La suma es %.2f", methods.addition(z, y, x));
    printf("\n La suma es %.2f", ophp.operator++());
    printf("\n La resta es %.2f", ophp.operator--());
    printf("\n El producto es %.2f", ophp.operator*());
    return 0;

}
