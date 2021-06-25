#pragma once
#include <string>

using namespace std;

class IngresoDatos
{

private:

	string text;


public:

	string IngresoTexto(string mensaje = "Ingrese texto:");
	string IngresoNumero(string mensaje = "Ingrese numeros:");
	bool validarCedula(string dato);
	int suma(int[]);
	bool anioBisiesto(int);

};