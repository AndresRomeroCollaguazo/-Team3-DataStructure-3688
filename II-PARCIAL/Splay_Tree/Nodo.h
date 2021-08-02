/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Proyecto Diccionario Ingles-Español
Fecha creación: 30/07/2021
Fecha de modificación: 1/08/2021 */
#pragma once
#include <iostream>
#include <cstdio>
#include <cstdlib>

template <typename T>
/**
      * @brief Clase Nodo que contiene la estructura de un nodo del arbol splay
      */
class Nodo
{
    private :
    T data;
    Nodo* left;
    Nodo* right;
    public :
    /**
      * @brief Nodo constructor de la clase Nodo por defecto
      */
    Nodo() = default;
    /**
      * @brief getData obtiene el dato del nodo
      * @return T dato del nodo
      */
    T getData();
    /**
      * @brief setData setea el dato del nodo creado
      * @param T dato del nodo 
      */
    void setData(T _data);
    /**
      * @brief getLeft Obtiene el nodo de la izquierda
      * @return Nodo* nodo de la izquierda
      */
    Nodo* getLeft();
    /**
      * @brief setLeft setea el nodo de la izquierda
      * @param Nodo* nodo a setear 
      */
    void setLeft(Nodo* _left);
    /**
      * @brief getRight obtiene el nodo de la derecha
      * @return Nodo* nodo de la derecha
      */
    Nodo* getRight();
    /**
      * @brief setRight setea nodo a la derecha
      * @param Nodo* nodo a setear
      */
    void setRight(Nodo* _right);
    friend class Nodo ;
};
    
    template <typename T>
    T Nodo<T>::getData(){
        return data;
    }
    
    template <typename T>
    void Nodo<T>::setData(T _data){
        data = _data;
    }

    template <typename T>
    Nodo<T>* Nodo<T>::getLeft(){
        return left;
    }

    template <typename T>
    void Nodo<T>::setLeft(Nodo* _left){
        left = _left ;
    }

    template <typename T>
    Nodo<T>* Nodo<T>::getRight(){
        return right ;
    }

    template <typename T>
    void Nodo<T>::setRight(Nodo* _right){
        right = _right ;
    }
