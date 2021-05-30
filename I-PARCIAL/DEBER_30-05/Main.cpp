
#include <iostream>
#include "Vector.h";
#include "Operaciones.h";
using namespace std;
int main()
{
	int vector[10] = {-1,5,8,10,20,6,7,8,9,10};
	Vector v1(vector);
	Operaciones op;
	printf("Vector original\n");
	op.imprimir(v1);
	printf("\n");
	op.ingresar(v1);
	op.imprimir(v1);
	printf("\n");
	cout<<op.procesar(v1);
	printf("\n\n");
	op.encerar(v1);
	op.imprimir(v1);
}
