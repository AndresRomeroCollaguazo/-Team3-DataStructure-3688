#pragma once
#include"Tail.h"
#include <functional>
class Operations {
public:

	int* num_Clientes(std::function<void(int*, int)>, int, Tail&);
	int* tiempo_Llegada(std::function<int(int, int)>, int, Tail&);
	int* tiempo_Espera_Salida(std::function<void(int* vector, int* ts, int* tll, int* tser, int i)> comp, Tail&, Tail&, int*, int*, int*, int);
	int* tiempo_No_Cajero(std::function<void(int* vector, int* ts, int* tll, int i)> comp, Tail&, int*, int*, int);
	int* tiempo_Servicio(std::function<int(int min, int max)> rand, int, Tail&);
	int* tiempo_Llegadas(std::function<void(int* vector, int* tll, int i)> asig, Tail&, int*, int n);
	void imprimirTabla(std::function<void()>, Tail& nc, Tail& tll, Tail& te, Tail& tnc, Tail& tser, Tail& ts, Tail& tell);
	double promedio(std::function<double(int n1, int n2)>, Tail&);
	int numeroClientesEspera(std::function<bool(int n1)>contar, Tail&);
};