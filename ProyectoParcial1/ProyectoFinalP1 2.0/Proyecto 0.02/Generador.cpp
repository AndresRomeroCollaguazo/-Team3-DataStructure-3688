#include "Generador.h"

#include<iostream>

using namespace std;

bool Generador::existeCorreo(string correo, Lista* cuentas) {

	Nodo* aux = new Nodo();
	while (aux != NULL)
	{

		if (correo == aux->getCuenta().getPersona().getCorreo()) {
			return true;
		}
		aux = aux->getSiguiente();
	}

	return false;
}

string Generador::crearCorreo(string apellido, string nombre, Lista* cuentas) {


	string correo;
	int cont = 1;
	Nodo* aux = new Nodo();

	if (nombre[0] >= 'A' && nombre[0] <= 'Z')
	{
		nombre[0] = nombre[0] - 'A' + 'a';
	}
	if (apellido[0] >= 'A' && apellido[0] <= 'Z')
	{
		apellido[0] = apellido[0] - 'A' + 'a';
	}

	apellido = apellido;
	nombre = nombre;

	correo = nombre[0] + apellido + this->dominio;
	aux = cuentas->getNodo();

	if (existeCorreo(correo, cuentas))
	{
		correo = nombre[0] + apellido + to_string(cont) + this->dominio;
		cont += 1;
	}

	while (aux != NULL)
	{
		while (existeCorreo(correo, cuentas));

		correo = nombre[0] + apellido + to_string(cont) + this->dominio;
		cont += 1;

		aux = aux->getSiguiente();
	}

	return correo;

}

string Generador::generarNumeroDeCuenta(string cedula, int tipoDeCuenta) {

	int numero = (tipoDeCuenta == 1) ? 65 : 67;
	string cuenta = to_string(numero);

	for (int i = 9; i >= 0; i--)
	{
		cuenta += cedula[i];

	}

	return cuenta;

}

Generador::Generador()
{
	this->dominio = "@espe.edu.ec";
}