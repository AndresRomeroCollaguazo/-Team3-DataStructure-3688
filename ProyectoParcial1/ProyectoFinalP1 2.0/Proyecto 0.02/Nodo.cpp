#include "Nodo.h"

using namespace std;


Nodo::Nodo() {
    this->siguiente = NULL;
    this->anterior = NULL;
}
Nodo::Nodo(Cuenta cuenta, Nodo* siguiente, Nodo* anterior)
{
    this->cuenta = cuenta;
    this->siguiente = siguiente;
    this->anterior = anterior;
}
void Nodo::setCuenta(Cuenta cuenta)
{
    this->cuenta = cuenta;
}
void Nodo::setSiguiente(Nodo* nodo)
{
    this->siguiente = nodo;
}
void Nodo::setAnterior(Nodo* nodo)
{
    this->anterior = nodo;
}
Cuenta Nodo::getCuenta()
{
    return this->cuenta;
}
Nodo* Nodo::getSiguiente()
{
    return this->siguiente;
}
Nodo* Nodo::getAnterior()
{
    return this->anterior;
}