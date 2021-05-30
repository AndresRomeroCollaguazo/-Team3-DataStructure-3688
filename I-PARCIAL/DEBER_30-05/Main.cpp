/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Memoria Estática
Fecha creación : 28 / 05 / 2021
Fecha de modificación : 30 / 05 / 2021 */


#include <iostream>
#include "Vector.h";
#include "Operations.h";
using namespace std;
int main()
{
	int vector[10] = { -1,5,8,10,20,6,7,8,9,10 };
	Vector v1(vector);
	Operations op;
	cout << "Vector original\n " << endl;
	op.print(v1);
	cout << "\n" << endl;
	op.get_into(v1);
	op.print(v1);
	cout << "\n" << endl;
	cout << op.process(v1);
	cout << "\n \n" << endl;
	op.wax(v1);
	op.print(v1);
}
