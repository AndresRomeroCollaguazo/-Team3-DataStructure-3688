#include"Arbol.h"
#include <cstddef>
#include <memory>
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
int a = 0;
std::string traducida = "Traduccion no disponible";

Arbol::Arbol() {
	this->raiz = NULL;
}
Arbol::~Arbol() {
}

std::string Arbol::Traducir(Nodo* ArbolIn, Nodo* ArbolEs, std::string palabraIn){

    std::string valCod = "" ;
	reiniciar();
    int b  = Buscar(ArbolIn , palabraIn);
	if( b < 0 || b > 1000){
		reiniciar();
		valCod = "Traduccion no disponible";
	} else{
	reiniciar();
	valCod = Buscar(ArbolEs , b );
	}
	return valCod;
}

void Arbol::Insertar(int numero,std::string palabra, Nodo** nodo) {
	if (*nodo == NULL)
		*nodo = new Nodo(numero,palabra);
	else if ((*nodo)->numero < numero) {
		Insertar(numero,palabra, &(*nodo)->derecha);
	}
	else if ((*nodo)->numero > numero) {
		Insertar(numero,palabra, &(*nodo)->izquierda);
	}
}
void Arbol::PasarARaiz(int numero, Nodo** nodo) {
	while ((*nodo)->numero != numero) {
		ControlDeMovimiento(numero, nodo);
	}
}
void Arbol::ControlDeMovimiento(int numero, Nodo** nodo) {
	if ((*nodo)->numero > numero) {
		if ((*nodo)->izquierda->numero == numero)
			Zig(nodo);
		else if ((*nodo)->izquierda->numero > numero && ((*nodo)->izquierda->izquierda->numero))
			ZigZig(nodo);
		else if ((*nodo)->izquierda->numero > numero && ((*nodo)->izquierda->derecha->numero))
			ZigZag(nodo);
		else
			ControlDeMovimiento(numero, &(*nodo)->izquierda);
	}
	else if ((*nodo)->numero < numero) {
		if ((*nodo)->derecha->numero == numero)
			Zag(nodo);
		else if ((*nodo)->derecha->numero > numero && ((*nodo)->derecha->izquierda->numero))
			ZagZig(nodo);
		else if ((*nodo)->derecha->numero > numero && ((*nodo)->derecha->derecha->numero))
			ZagZag(nodo);
		else
			ControlDeMovimiento(numero, &(*nodo)->derecha);
	}
}
void Arbol::Graficar() {
	FILE* file;
	file = fopen("C:\\Users\\Jorge\\Downloads\\CH\\Arboles Splay\\Arboles Splay\\grafo.dot", "w+");
	fprintf(file, "diagraph G {\n");
	getDot(file, raiz);
	fprintf(file, "`}");
	fclose(file);
	system("dot grafo.dot -o grafica.jpg -Tjpg Grankdir=TB && xdg-open grafica.jpg");
}
bool Arbol::Buscar(int numero, Nodo* nodo) {
	if (nodo != NULL) {
		if (nodo->numero == numero)
			return true;
		else if (nodo->numero > numero)
			return Buscar(numero, nodo->izquierda);
		else if (nodo->numero < numero)
			return Buscar(numero, nodo->derecha);

	}
	return false;
}
bool Arbol::Eliminar(int numero) {
	if (!Buscar(numero, raiz))return false;
	PasarARaiz(numero, &raiz);
	if (raiz->izquierda == NULL && raiz->derecha == NULL)
		raiz = NULL;
	else if (raiz->izquierda != NULL && raiz->derecha != NULL) {
		int aux = ObtenerMayorDeMenores(raiz->izquierda);
		if (aux = !raiz->izquierda->numero)
			PasarARaiz(aux, &(raiz->izquierda));
		raiz->izquierda->derecha = raiz->derecha;
		raiz = raiz->derecha;
	}
	else if (raiz->izquierda != NULL)
		raiz = raiz->izquierda;
	else
		raiz= raiz->derecha;
	return true;
}
int Arbol:: ObtenerMayorDeMenores(Nodo* nodo) {
	if (nodo->derecha == NULL) {
		return nodo->numero;
	}
	return ObtenerMayorDeMenores(nodo->derecha);
}
void Arbol::Zig(Nodo** nodo) {
	Nodo* aux = *nodo;
	*nodo = (*nodo)->izquierda;
	aux->izquierda = (*nodo)->derecha;
	(*nodo)->derecha = aux;
}
void Arbol::ZigZig(Nodo** nodo) {
	Zig(nodo);
	Zig(nodo);
}
void Arbol::ZigZag(Nodo** nodo) {
	Zag(&(*nodo)->izquierda);
	Zig(nodo);
}
void Arbol::Zag(Nodo** nodo) {
	Nodo* aux = *nodo;
	*nodo = (*nodo)->derecha;
	aux->derecha = (*nodo)->izquierda;
	(*nodo)->izquierda = aux;
}
void Arbol::ZagZag(Nodo** nodo) {
	Zag(nodo);
	Zag(nodo);
}
void Arbol::ZagZig(Nodo** nodo) {
	Zig(&(*nodo)->derecha);
	Zag(nodo);
}
void Arbol::getDot(FILE* file, Nodo* nodo) {
	if (nodo == NULL)return;
	fprintf(file, "x%p[label=\"%i\"];\n", nodo, nodo->numero);
	if (nodo->izquierda != NULL)
		fprintf(file, "x%p->x%p[arrowhead =normalrtee];\n", nodo, nodo->izquierda);
	if (nodo->derecha != NULL)
		fprintf(file, "x%p->x%p[arrowhead =normalrtee];\n", nodo, nodo->derecha);
	getDot(file, nodo->izquierda);
	getDot(file, nodo->derecha);

}

int Arbol::Buscar(Nodo* arbo, std::string palabra)
{
	if (arbo != NULL)
	{
		Buscar(arbo->izquierda, palabra);
		if (arbo->palabra == palabra)
		{
            a = arbo->numero;
		}
		Buscar(arbo->derecha , palabra);
	}
    return a;
}

Nodo::Nodo(int numero , std::string palabra) {
	this->numero = numero;
	this->palabra = palabra;
	this->derecha = this->izquierda = NULL;
}
Nodo::~Nodo() {

}

void Arbol::InOrder(Nodo* root)
    {
        if (root)
        {
            InOrder(root->izquierda);
            std::cout<< "Dato: " <<root->numero<< " | Palabra" << root->palabra;
            if(root->izquierda)
                std::cout<< " | Hijo Izquierdo: "<< root->izquierda->numero ;
            if(root->derecha)
                std::cout << " | Hijo derecho: " << root->derecha->numero;
            std::cout<< "\n";
            InOrder(root->derecha);
        }
    }

    std::string Arbol::Buscar(Nodo* splay, int cod)
    {
	if (splay != NULL)
	{
		Buscar(splay->izquierda, cod);
		if (splay->numero == cod)
		{
			traducida =  splay->palabra;
		}
		Buscar(splay->derecha , cod);
	}
	return traducida;
}

void Arbol::reiniciar(){
	a = 0 ;
	traducida = "error" ;
}