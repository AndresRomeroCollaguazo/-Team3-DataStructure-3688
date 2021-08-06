#pragma once
#include <iostream>
#include <cstdio>
/**
  * @brief Clase Nodo que contiene un nodo de los mismos y dato de tipo int
  */
class Nodo{
public:
	/**
	  * @brief Nodo(int,std::string) genera un constructor con enteros y una cadena de caracteres string
	  * @return constructor
	  */
	Nodo(int,std::string);
	/**
	  * @brief ~Nodo() genera un destructor para liberar memoria
	  * @return destructor
	  */
	~Nodo();
	/**
	  * @brief Nodo* genera un nodo direccionado a un espacio en el arbol
	  * @return * izquierda, * derecha;
	  */
	Nodo* izquierda, * derecha;
	int numero;
	std::string palabra;
};
/**
  * @brief Arbol que genera los datos del arbol 
  */
class Arbol {
	void getDot(FILE*, Nodo*);
	
public:
	/**
	  * @brief Arbol() genera un constructor vacio
	  * @return Arbol
	  */
	Arbol();
	/**
	  * @brief ~Arbol() genera un destructor para liberar memoria
	  * @return destructor
	  */
	~Arbol();
	/**
	  * @brief insertar Permite el ingreso de datos al arbol y ubicarlos en un nodo
	 * @param retorna el entero asignado, su cadena y el nodo vector
	  */
	void Insertar(int,std::string , Nodo**);
	/**
	  * @brief PasarARaiz Permite mover un nodo de grado inferior a la raiz asignada
	  * @param retorna el entero asignado
	  */
	void PasarARaiz(int, Nodo** nodo);
	/**
	  * @brief ControlDeMoviminto verifica el moviminto del nodo ingresado
	  * @param retorna el movimiento
	  */
	void ControlDeMovimiento(int numero, Nodo** nodo);
	/**
	  * @brief Graficar permite genmerar una grafica del arbol descrito. 
	  * @param retorna Grafica
	  */
	void Graficar();
	/**
	  * @brief Buscar Permite la busqueda de datos en el arbol y ubicarlos en la raiz
	  * @param retorna valor de verdad
	  */
	bool Buscar(int, Nodo*);
	/**
	  * @brief Eliminar asigna la eliminacion del digito ingresado, lo busca y realiza la rotacion preferente.
	  * @param retorna valor de verdad al Eliminar
	  */
	bool Eliminar(int);
	/**
	  * @brief ObtenerMayorDeMenores permite mostrar el numero qeu se encuentra a la derecha final.
	  * @param retorna el entero asignado
	  */
	int ObtenerMayorDeMenores(Nodo*);
	/**
	  * @brief Buscar Permite la busqueda de datos en el arbol y ubicarlos en la raiz
	  * @param retorna el valor asignado en su cadena
	  */
	int Buscar(Nodo* , std::string );
	/**
	  * @brief Taducir Permite la busqueda de la palabra en el arbol y devulve la traduccion correspondiente
	  * @param retorna lo asignado en los nodos y en su cadena
	  */
	std::string Traducir(Nodo* , Nodo* , std::string );
	/**
	  * @brief Buscar Permite la busqueda de datos en el arbol y ubicarlos en la raiz
	  * @param retorna lo asignado en su cadena
	  */
	std::string Buscar(Nodo* , int );
	/**
	  * @brief InOrden Permite el ordenar todo lo qeu se encuentra en el arbol
	  * @param retorna InOrden de cadenas
	  */
	void InOrder(Nodo*);
	/**
	  * @brief Reiniciar Permite reiniciar el arbol y generar un nuevo ingreso
	  * @param retorna Reiniciar
	  */
	void reiniciar();
	/**
	  * @brief Zig realiza un movimiento simple de izquierda 
	  * @param retorna movimiento
	  */
	void Zig(Nodo**);
	/**
	  * @brief ZigZig realiza dos movimientos simples en el mismo sentido
	  * @param retorna movimiento
	  */
	void ZigZig(Nodo**);
	/**
	  * @brief ZigZag realiza dos movimientos simples en sentidos opuestos
	  * @param retorna movimiento
	  */
	void ZigZag(Nodo**);
	/**
	  * @brief Zig realiza un movimiento simple de derecha 
	  * @param retorna movimiento
	  */
	void Zag(Nodo**);
	/**
	  * @brief ZagZag realiza dos movimientos simples en el mismo sentido
	  * @param retorna movimiento
	  */
	void ZagZag(Nodo**);
	/**
	  * @brief ZagZig realiza dos movimientos simples en sentidos opuestos
	  * @param retorna movimiento
	  */
	void ZagZig(Nodo**);
	/**
	  * @brief Nodo* Raiz que utiliza el dato para el arbol y su base
	  */
	Nodo* raiz;
};