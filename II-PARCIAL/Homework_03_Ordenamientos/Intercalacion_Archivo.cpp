#include "Intercalacion_Archivo.h"
#include <iostream>

using namespace std;
void Intercalacion::abrir(std::fstream* f, char* nom, int tip) {
	if (tip == 1)
		(*f).open(nom, ios::in);
	else if (tip == 2) 
		(*f).open(nom, ios::out | ios::app);
	
  	else		
		(*f).open(nom, ios::out);

}
void Intercalacion::cerrar(fstream* f) {
	(*f).close();
}
void Intercalacion::limpiar() {
	fstream F1, F2, F3;
	abrir(&F1,(char*) "F1.txt", 3);
	abrir(&F2, (char*)"F2.txt", 3);
	abrir(&F3, (char*)"F3.txt", 3);
	cerrar(&F1);
	cerrar(&F2);
	cerrar(&F3);
}
bool Intercalacion::hayDatos(char *nom) {
	fstream F;
	abrir(&F, nom, 1);
	int x = -10001;
	F >> x;
	if (x != -10001)
		return true;
	else
		return false;
	cerrar(&F);
	return true;
}

void Intercalacion::mostrar(char *nom) {
	fstream F;
	abrir(&F, nom, 1);
	int dato;
	F >> dato;
	while (!F.eof()) {
		cout << dato << " ";
		F >> dato;
	}
	cerrar(&F);
}

void Intercalacion::insertar(Vector<int>& v, char *nom,int tam) {
	fstream F;
	abrir(&F, nom, 2);
	int aux = 0;
	

	v.ordenamientoInsercionBinaria();
	
	for (int i = 0; i < tam; i++)
	{
		aux = v.obtener(i);
		F << aux << " ";
	}
	
	cerrar(&F);
}

void Intercalacion::ordenar() {
	fstream F1, F2, F3;
	abrir(&F1, (char*)"F1.txt", 1);
	abrir(&F2, (char*)"F2.txt", 1);
	abrir(&F3, (char*)"F3.txt", 3);

	int  r1, r2;
	F1 >> r1;
	F2 >> r2;
	
	while (!F1.eof() && !F2.eof())
		if (r1 < r2) {
			F3 << r1 << " ";
			F1 >> r1;
		}
		else {
			F3 << r2 << " ";
			F2 >> r2;
		}

	if (!F1.eof())
		while (!F1.eof()) {
			F3 << r1 << " ";
			F1 >> r1;
		}
	else if (!F2.eof())
		while (!F2.eof()) {
			F2 << r2 << " ";
			F2 >> r2;
		}
	cerrar(&F1);
	cerrar(&F2);
	cerrar(&F3);
}