#include <iostream>
#include "Operations.h"
#include "Nodo.h"
#include<stdlib.h>
#include<ostream>
#include <string.h>
#include "Control.h"

using namespace std;
int* Operations::num_Clientes(std::function<void(int* v, int i)> num, int n, Tail& t) {
	int* vector;
	vector = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		num(vector, i);

		t.push(*(vector + i));

	}
	return vector;

}
int* Operations::tiempo_Llegada(std::function<int(int min, int max)> rand, int n, Tail& t) {
	int* vector;
	vector = (int*)malloc(n * sizeof(int));
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			*(vector + i) = rand(1, 25);
		}
		else {
			*(vector + i) = *(vector + i - 1) + rand(1, 25);
		}

		t.push(*(vector + i));
	}

	return vector;
}
int* Operations::tiempo_Espera_Salida(std::function<void(int* vector, int* ts, int* tll, int* tser, int i)> comp, Tail& t, Tail& t1, int* tll, int* tser, int* ts, int n) {
	int* vector;
	vector = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			*(ts + i) = 0 + *(tll + i) + *(tser + i);
			*(vector + i) = 0;

		}

		else {
			comp(vector, ts, tll, tser, i);

		}
		t.push(*(vector + i));
		t1.push(*(ts + i));

	}

	return vector;

}

int* Operations::tiempo_No_Cajero(std::function<void(int* vector, int* ts, int* tll, int i)> comp, Tail& t, int* tll, int* ts, int n) {
	int* vector;
	vector = (int*)malloc(n * sizeof(int));
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			*(vector + i) = 0;

		}
		else {
			comp(vector, ts, tll, i);

		}

		t.push(*(vector + i));

	}

	return vector;
}
int* Operations::tiempo_Servicio(std::function<int(int min, int max)> rand, int n, Tail& t) {
	int* vector;
	vector = (int*)malloc(n * sizeof(int));
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		*(vector + i) = rand(1, 16);
		t.push(*(vector + i));
	}
	return vector;
}

int* Operations::tiempo_Llegadas(std::function<void(int* vector, int* tll, int i)> asig, Tail& t, int* tll, int n) {
	int* vector;
	vector = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			*(vector + i) = *(tll + i);
		}
		else {
			asig(vector, tll, i);

		}
		t.push(*(vector + i));
	}
	return vector;
}

void Operations::imprimirTabla(std::function<void()> imp, Tail& nc, Tail& tll, Tail& te, Tail& tnc, Tail& tser, Tail& ts, Tail& tell) {
	Control c;
	//c.gotoxy(0, 10);
	imp();
	Nodo* temporalnc = nc.getFirst();
	Nodo* temporaltll = tll.getFirst();
	Nodo* temporalte = te.getFirst();
	Nodo* temporaltnc = tnc.getFirst();
	Nodo* temporaltser = tser.getFirst();
	Nodo* temporalts = ts.getFirst();
	Nodo* temporaltell = tell.getFirst();
	//c.gotoxy(0, 13);
	while (temporalnc) {
		while (temporaltll)
		{
			while (temporalte)
			{
				while (temporaltnc)

				{
					while (temporaltser)
					{
						while (temporalts)
						{
							while (temporaltell)
							{
								cout << temporalnc->getDate() << "\t   " << temporaltll->getDate() << "\t\t" << temporalte->getDate() << "\t\t" << temporaltnc->getDate() << "\t\t" << temporaltser->getDate() << "\t\t" << temporalts->getDate() << "\t\t" << temporaltell->getDate() << endl;

								temporaltll = temporaltll->getNext();
								temporalnc = temporalnc->getNext();
								temporalte = temporalte->getNext();
								temporaltnc = temporaltnc->getNext();
								temporaltser = temporaltser->getNext();
								temporalts = temporalts->getNext();
								temporaltell = temporaltell->getNext();
							}
						}
					}
				}
			}
		}
	}


}
double Operations::promedio(std::function<double(int n1, int n2)>sumai, Tail& t) {

	double suma = 0;
	double promedio = 0;
	Nodo* temporal = t.getFirst();

	while (temporal) {

		suma = sumai(suma, temporal->getDate());
		temporal = temporal->getNext();
	}

	promedio = suma / t.getTamaño();
	return promedio;
}

int Operations::numeroClientesEspera(std::function<bool(int n1)>comp, Tail& t) {

	double cont = 0;

	Nodo* temporal = t.getFirst();

	while (temporal) {
		if (comp(temporal->getDate()))
		{
			cont++;
		}

		temporal = temporal->getNext();
	}


	return cont;
}