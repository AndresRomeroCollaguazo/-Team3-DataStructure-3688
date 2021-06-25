#pragma once
#include"Cuenta.h"
#include "Nodo.h"
/**
      * @brief Lista clase Lista de cualquier tipo
      */
class Lista
{

public:
    /**
      * @brief Lista constructor de la clase Lista
      * @param void
      */
    Lista();
    /**
      * @brief insetarInicio inserta al inicio de la lista
      * @param Cuenta
      */
    void insertarInicio(Cuenta);
    /**
      * @brief modificarNodo modifica el nodo para modificar un saldo de una cuenta de la lista
      * @param string
      * @param float
      * @return void
      */
    void modificarNodo(string, float);
    void modificarNodo(string id, double interes, double deuda, int cuotas);
    /**
      * @brief getNodo Obtiene el nodo de la lista
      * @param void
      * @return Nodo*
      */
    Nodo* getNodo();
    /**
      * @brief setNodo Setea el nodo de la lista
      * @param Nodo*
      * @return void
      */
    void setNodo(Nodo*);
    bool verificarUsuario(std::string usuario, std::string contrasena);
    Nodo* retornarUsuario(std::string usuario, std::string contrasena);
    /**
      * @brief listaVacia verifica si la lista esta vacia
      * @param void
      * @return bool
      */
    bool listaVacia();
    /**
      * @brief toString Imprime la informacion de la lista
      * @param void
      * @return void
      */
    void toString();
    /**
      * @brief tamanio Devuelve el tamanio de la lista
      * @param void
      * @return int
      */
    int tamanio();
    /**
      * @brief verCedulas verifica si la cedula no se repite en la lista
      * @param string
      * @return bool
      */
    bool verCedulas(std::string);
    /**
      * @brief verTelefono verifica si el telefono no se repite en la lista
      * @param string
      * @return bool
      */
    bool verTelefono(std::string);
private:
    Nodo* nodo;


};
