/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de clases
Fecha creación : 31 / 05 / 2021
Fecha de modificación : 31 / 05 / 2021 */
#include "Person.h"
#include "Date.h"
#include <iostream>
using namespace std;
int main()
{
	Person p1("Jose", "Valdiviezo", 19, 1234);
	Date d1(31, 05, 2021);

	cout <<  endl;
	cout <<"La fecha que se genero es: "<<d1.getDay()<< "/"<<d1.getMonth()<<"/"<<d1.getYear() <<"\n"<< endl;
	cout <<"Nombre-> "<< p1.getName()<<endl;
	cout << "Apellido-> " << p1.getLast_name() << endl;
	cout << "Edad-> " << p1.getAge() << endl;
	cout << "DNI-> " << p1.getDni() << endl;
}


