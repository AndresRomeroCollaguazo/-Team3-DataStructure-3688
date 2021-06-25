#pragma once
#include "Lista.h"
#include<string>


using  namespace std;

class Generador
{
public:
	string crearCorreo(string, string, Lista*);
	string generarNumeroDeCuenta(string, int);
	Generador();
	//~Generador();

protected:
private:
	string dominio;
	bool existeCorreo(string, Lista*);

};