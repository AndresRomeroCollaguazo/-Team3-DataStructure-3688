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
#include "Nodo.h"

template <typename T>
/**
      * @brief Clase Splay que contiene la estructura y funciones del arbol
      */
class Splay
{
    public:
        /**
      * @brief Splay constructor de la clase Splay por defecto
      */
    Splay() = default;
    /**
      * @brief RR_Rotate hace rotacion derecha derecha
      * @param Nodo<T>* nodo a rotar
      * @return Nodo<T>* nodo de tipo T
      */
    Nodo<T>* RR_Rotate(Nodo<T>* k2);
    /**
      * @brief LL_Rotate hace rotacion izquierda izquierda
      * @param Nodo<T>* nodo a rotar
      * @return Nodo<T>* nodo de tipo T
      */
    Nodo<T>* LL_Rotate(Nodo<T>* k2);
    /**
      * @brief SplayO hace biselacion hasra la raiz
      * @param Nodo<T>* nodo a rotar
      * @param T dato del nodo
      * @return Nodo<T>* nodo de tipo T
      */
    Nodo<T>* SplayO(T data, Nodo<T>* root);
    /**
      * @brief New_Node crea un Nodo del arbol
      * @param T dato del nodo
      * @return Nodo<T>* nodo de tipo T
      */
    Nodo<T>* New_Node(T data);
    /**
      * @brief Insert inserta un nodo en el arbol
      * @param Nodo<T>* nodo a insertar
      * @param T dato del nodo
      * @return Nodo<T>* nodo de tipo T
      */
    Nodo<T>* Insert(T data, Nodo<T>* root);
    /**
      * @brief Delete elimina un nodo en el arbol
      * @param Nodo<T>* nodo a eliminar
      * @param T dato del nodo
      * @return Nodo<T>* nodo de tipo T
      */
    Nodo<T>* Delete(T data, Nodo<T>* root);
    /**
      * @brief Search busca un nodo en el arbol
      * @param Nodo<T>* nodo a buscar
      * @param T dato del nodo
      * @return Nodo<T>* nodo de tipo T
      */
    Nodo<T>* Search(T data, Nodo<T>* root);
    /**
      * @brief InOrder Coloca el arbol en InOrden
      * @param Nodo<T>* nodo
      */
    void InOrder(Nodo<T>* root);

};
    
    // RR(Y rotates to the right)
    template <typename T>
    Nodo<T>* Splay<T>::RR_Rotate(Nodo<T>* k2)
    {
        Nodo<T>* k1 = k2->getLeft();
        k2->setLeft(k1->getRight()) ;
        k1->setRight( k2) ;
        return k1;
    }
 
    // LL(Y rotates to the left)
    template <typename T>
    Nodo<T>* Splay<T>::LL_Rotate(Nodo<T>* k2)
    {
        Nodo<T>* k1 = k2->getRight();
        k2->setRight(k1->getLeft()) ;
        k1->setLeft(k2) ;
        return k1;
    }

    // An implementation of top-down splay tree
    template <typename T>
    Nodo<T>* Splay<T>::SplayO(T key, Nodo<T>* root)
        {
        if (!root)
            return NULL;
        Nodo<T> header;
        /* header.rchild points to L tree;
        header.lchild points to R Tree */
        header.setLeft(NULL) ; header.setRight(NULL) ;
        Nodo<T>* LeftTreeMax = &header;
        Nodo<T>* RightTreeMin = &header;
        while (1)
        {
            if (key < root->getData())
            {
                if (!root->getLeft())
                    break;
                if (key < root->getLeft()->getData())
                {
                    root = RR_Rotate(root);
                    // only zig-zig mode need to rotate once,
                    if (!root->getLeft())
                        break;
                }
                /* Link to R Tree */
                RightTreeMin->setLeft(root) ;
                RightTreeMin = RightTreeMin->getLeft();
                root = root->getLeft();
                RightTreeMin->setLeft(NULL) ;
            }
            else if (key > root->getData())
            {
                if (!root->getRight())
                    break;
                if (key > root->getRight()->getData())
                {
                    root = LL_Rotate(root);
                    // only zag-zag mode need to rotate once,
                    if (!root->getRight())
                        break;
                }
                /* Link to L Tree */
                LeftTreeMax->setRight(root);
                LeftTreeMax = LeftTreeMax->getRight();
                root = root->getRight();
                LeftTreeMax->setRight(NULL) ;
            }
            else
                break;
        }
        /* assemble L Tree, Middle Tree and R tree */
        LeftTreeMax->setRight(root->getLeft());
        RightTreeMin->setLeft(root->getRight());
        root->setLeft(header.getRight());
        root->setRight(header.getLeft());
        return root;
    }

    template <typename T>
    Nodo<T>* Splay<T>::New_Node(T key)
    {
        Nodo<T>* p_node = new Nodo<T>();
        if (!p_node)
        {
            fprintf(stderr, "Out of memory!\n");
            exit(1);
        }
        p_node->setData(key);
        p_node->setLeft(NULL) ; p_node->setRight(NULL) ;
        return p_node;
    }

    template <typename T>
    Nodo<T>* Splay<T>::Insert(T key, Nodo<T>* root)
    {
        static Nodo<T>* p_node = NULL;
        if (!p_node)
            p_node = New_Node(key);
        else
            p_node->setData(key) ;
        if (!root)
        {
            root = p_node;
            p_node = NULL;
            return root;
        }
        root = SplayO(key, root);
        /* This is BST that, all keys <= root->key is in root->lchild, all keys >
        root->key is in root->rchild. */
        if (key < root->getData())
        {
            p_node->setLeft(root->getLeft()) ;
            p_node->setRight(root) ;
            root->setLeft(NULL) ;
            root = p_node;
        }
        else if (key >= root->getData())
        {
            p_node->setRight(root->getRight());
            p_node->setLeft(root) ;
            root->setRight(NULL) ;
            root = p_node;
        }
        else
            return root;
        p_node = NULL;
        return root;
    }

    template <typename T>
    Nodo<T>* Splay<T>::Delete(T key, Nodo<T>* root)
    {
        Nodo<T>* temp;
        if (!root)
            return NULL;
        root = SplayO(key, root);
        if (key != root->getData())
            return root;
        else
        {
            if (!root->getLeft())
            {
                temp = root;
                root = root->getRight();
            }
            else
            {
                temp = root;
                /*Note: Since key == root->key,
                so after Splay(key, root->lchild),
                the tree we get will have no right child tree.*/
                root = SplayO(key, root->getLeft());
                root->setRight(temp->getRight()) ;
            }
            free(temp);
            return root;
        }
    }

    template <typename T>
    Nodo<T>* Splay<T>::Search(T key, Nodo<T>* root)
    {
        return SplayO(key, root);
    }

    template <typename T>
    void Splay<T>::InOrder(Nodo<T>* root)
    {
        if (root)
        {
            InOrder(root->getLeft());
            std::cout<< "Dato: " <<root->getData();
            if(root->getLeft())
                std::cout<< " | Hijo Izquierdo: "<< root->getLeft()->getData();
            if(root->getRight())
                std::cout << " | Hijo derecho: " << root->getRight()->getData();
            std::cout<< "\n";
            InOrder(root->getRight());
        }
    }
