/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de clases
Fecha creación : 31 / 05 / 2021
Fecha de modificación : 31 / 05 / 2021 */
#include "Person.h"
#include <iostream>
using namespace std;
int main()
{
   Person p1("Jose", "Valdiviezo", 19, 1234);
   Date d1(31, 05, 2021);
   printf("La fecha es: %d / %d / %d", d1.getDay(), d1.getMonth(), d1.getYear());
	printf("La persona es: %s %s edad: %d dni: %d", p1.getName(), p1.getLast_name(), p1.getAge(),p1.getDni());
   cout<<"FECHA: "<<endl;
}


