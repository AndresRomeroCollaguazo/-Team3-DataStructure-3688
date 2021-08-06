/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Proyecto Diccionario Ingles-Español
Fecha creación: 20/07/2021
Fecha de modificación: 31/07/2021 */
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
/**
	  * @brief Clase Arbol que contiene la estructura y funciones del arbol
	  */
class Arbol{
private:
	int codigo;
	string palabra;

public:
	typedef Arbol* arbol;
	Arbol *izq;
	Arbol *der;
	/**
	  * @brief crearNodo crea nodo con un string y un codigo
	  * @param string palabra del nodo
	  * @param int codigo del nodo
	  * @param arbol& arbol en donde crear nodo
	  */
	void crearNodo(string, int, arbol&);
	/**
	  * @brief insertar inserta nodo con un string y un codigo
	  * @param string palabra del nodo
	  * @param int codigo del nodo
	  * @param arbol& arbol en donde insertar nodo
	  */
	void insertar(arbol&, int, string);
	/**
	  * @brief preOrden imprime el arbol en preOrden
	  * @param arbol arbol en donde recorrer en preorden e imprimirlo
	  */
	void preOrden(arbol);
	/**
	* @brief postOrden imprime el arbol en postOrden
	* @param arbol arbol en donde recorrer en postorden e imprimirlo
	*/
	void postOrden(arbol);
	/**
	  * @brief enOrden imprime el arbol en enOrden
	  * @param arbol arbol en donde recorrer en enorden e imprimirlo
	  */
	void enOrden(arbol);
	/**
	  * @brief Buscar busca un nodo en el arbol por su codigo
	  * @param arbol arbol en donde recorrer y encontrar el nodo
	  * @param int codigo del nodo a buscarlo
	  * @return string palabra del nodo encontrado
	  */
	string Buscar(arbol, int);
	/**
	  * @brief Buscar busca un nodo en el arbol por su palabra
	  * @param arbol arbol en donde recorrer y encontrar el nodo
	  * @param string palabra del nodo a buscarlo
	  * @param int codigo del nodo buscado
	  */
	int Buscar(arbol, string);

	/**
	  * @brief Traducir recorre el los arboles ingles español para traducir la palabra insertada
	  * @param arbol arbol en donde recorrer y encontrar traduccion
	  * @param arbol arbol en donde recorrer y encontrar traduccion
	  * @param string palabra a traducir
	  * @return string palabra traducida
	  */
	string Traducir(arbol, arbol, string);
	/**
	  * @brief Arbol constructor vacio de la clase
	  */
	Arbol();

	/**
	  * @brief Arbol~ destructor de la clase
	  */
	~Arbol();
};

