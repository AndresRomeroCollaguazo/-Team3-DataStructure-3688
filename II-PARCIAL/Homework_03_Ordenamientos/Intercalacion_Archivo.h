#pragma once
#include <fstream>

#include "Vector.h"
class Intercalacion {
private:
	void abrir(std::fstream* f, char* nom, int tip = 1);
	void cerrar(std::fstream* f);
public:
	void limpiar();
	bool hayDatos(char* nom);
	void mostrar(char* nom);
	void insertar(Vector<int>& v, char* nom,int tam);
	void ordenar();
};