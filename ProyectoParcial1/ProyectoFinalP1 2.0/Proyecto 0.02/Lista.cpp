#include "Lista.h"
#include "Nodo.h"
#include "Cuenta.h"

#include <iostream>
#include <string>

using namespace std;

Lista::Lista()
{
    this->nodo = NULL;
}

bool Lista::listaVacia()
{
    return (nodo == NULL) ? true : false;
}

void Lista::toString() {

    Nodo* aux = this->nodo;
    Nodo* aux1 = new Nodo();

    //aux = this->nodo;
    if (listaVacia())
    {
        cout << "\n\n\n\tSIN DATOS....\n\n\t";
    }
    else
    {
        while (aux != NULL)
        {
            aux->cuenta.mostrarInformacion();
            aux = aux->getSiguiente();
        }
    }



}

int Lista::tamanio()
{
    int tamanio = 0;
    Nodo* aux = this->nodo;
    Nodo* aux_1 = new Nodo();
    //aux = this->lista;

    while (aux != NULL)
    {
        tamanio++;
        aux_1 = aux;
        aux = aux->getSiguiente();
    }

    return tamanio;
}
bool Lista::verCedulas(std::string cedula) {
    Nodo* aux = this->nodo;
    while (aux != NULL)
    {

        if (aux->getCuenta().getPersona().getCedula() == cedula) {
            return false;
        }
        else if (cedula != aux->getCuenta().getPersona().getCedula())
        {
            return true;
        }
        else {
            return false;
        }
        aux = aux->getSiguiente();
    }

}

bool Lista::verTelefono(std::string telefono) {
    Nodo* aux = this->nodo;
    while (aux != NULL)
    {

        if (aux->getCuenta().getPersona().getTelefono() == telefono) {
            return false;
        }
        else if (telefono != aux->getCuenta().getPersona().getTelefono())
        {
            return true;
        }
        else {
            return false;
        }
        aux = aux->getSiguiente();
    }

}
void Lista::insertarInicio(Cuenta dato)
{
    if (this->listaVacia())
    {

        this->nodo = new Nodo(dato, NULL, NULL);
        //this->listaFinal = this->lista;

    }
    else
    {

        Nodo* aux = new Nodo(dato, nodo, NULL);
        this->nodo->setAnterior(aux);
        this->nodo = aux;
    }

}



void Lista::modificarNodo(string id, double interes,double deuda,int cuotas) {
    Nodo* aux = new Nodo();
    Cuenta auxCuenta;
    aux = this->nodo;

    while (aux != NULL)
    {

        if (aux->getCuenta().getId() == id) {
            auxCuenta = aux->getCuenta();
            auxCuenta.setInterest(interes);
            auxCuenta.setDeuda(deuda);
            auxCuenta.setCuotas(cuotas);
            aux->setCuenta(auxCuenta);

        }

        aux = aux->getSiguiente();
    }


}

Nodo* Lista::getNodo() {
    return this->nodo;
}

void Lista::setNodo(Nodo* nodo) {
    this->nodo = nodo;
}

bool Lista::verificarUsuario(std::string usuario, std::string contrasena) {

    Nodo* aux = this->nodo;
    while (aux != NULL)
    {
        if ((aux->getCuenta().getPersona().getCorreo() == usuario) && (aux->getCuenta().getPersona().getCedula() == contrasena)) {
            return true;
        }
        aux = aux->getSiguiente();
    }

    return false;
}

Nodo* Lista::retornarUsuario(std::string usuario, std::string contrasena) {

    Nodo* aux = this->nodo;
    Nodo* nod = this->nodo;
    while (aux != NULL)
    {
        if ((aux->getCuenta().getPersona().getCorreo() == usuario) && (aux->getCuenta().getPersona().getCedula() == contrasena)) {
            return aux;
        }
        aux = aux->getSiguiente();
    }
    return nod;
}