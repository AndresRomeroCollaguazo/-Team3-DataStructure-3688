/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantu�a Michelle, Medina Mart�n, P�rez Hamilton, Romero Jorge y Valarezo Andr�s
Proyecto Diccionario Ingles-Espa�ol
Fecha creaci�n: 20/07/2021
Fecha de modificaci�n: 31/07/2021 */
#include "Arbol.h"

Arbol::Arbol()
{
}

Arbol::~Arbol()
{
}

void Arbol::crearNodo(string palabra, int x, arbol& arbo)
{
	arbol nuevoNodo = new(Arbol);
	nuevoNodo->palabra = palabra;
	nuevoNodo->codigo = x;
	nuevoNodo->izq = NULL;
	nuevoNodo->der = NULL;
	arbo = nuevoNodo;
}

void Arbol::insertar(arbol &arbo, int x, string palabra)
{
	if (arbo == NULL)
	{
		crearNodo(palabra, x, arbo);
	}
	else if (x < arbo->codigo)
		insertar(arbo->izq, x, palabra);
	else if (x > arbo->codigo)
		insertar(arbo->der, x, palabra);
	else if (x == arbo->codigo)
		insertar(arbo->izq, x, palabra);
}

void Arbol::preOrden(arbol arbo)
{
	if (arbo != NULL)
	{
		cout << arbo->codigo << " ";
		preOrden(arbo->izq);
		preOrden(arbo->der);
	}
}

void Arbol::enOrden(arbol arbo)
{
	if (arbo != NULL)
	{
		enOrden(arbo->izq);
		cout << arbo->codigo << " ";
		enOrden(arbo->der);
	}
}

void Arbol::postOrden(arbol arbo)
{
	if (arbo != NULL)
	{
		postOrden(arbo->izq);
		postOrden(arbo->der);
		cout << arbo->codigo << " ";
	}
}

string Arbol::Buscar(arbol arbo, int cod)
{
	while (arbo != NULL)
	{
		if (arbo->codigo == cod)
		{
			return arbo->palabra;
		}
		arbo = arbo->der;
	}
	return "Codigo no encontrado";
}

int Arbol::Buscar(arbol arbo, string palabra)
{
	while (arbo != NULL)
	{
		if (arbo->palabra == palabra)
		{
			return arbo->codigo;
		}
		arbo = arbo->der;
	}
	return 0;
}

string Arbol::Traducir(arbol ArbolIn, arbol ArbolEs, string palabraIn)
{
	int codPal;
	string valCod;
	codPal = Buscar(ArbolIn, palabraIn);
	valCod = Buscar(ArbolEs, codPal);

	return valCod;
}