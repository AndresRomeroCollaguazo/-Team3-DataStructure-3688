#include "Fecha.h"
#include "Persona.h"
#include <string>
#include<iostream>

using namespace std;


std::string Persona::getNombre(void)
{
	return nombre;
}



void Persona::setNombre(std::string newNombre)
{
	nombre = newNombre;
}



std::string Persona::getApellido(void)
{
	return apellido;
}



void Persona::setApellido(std::string newApellido)
{
	apellido = newApellido;
}



std::string Persona::getCedula(void)
{
	return cedula;
}



void Persona::setCedula(std::string newCedula)
{
	cedula = newCedula;
}



std::string Persona::getCorreo(void)
{
	return correo;
}



void Persona::setCorreo(std::string newCorreo)
{
	correo = newCorreo;

}
void Persona::setTelefono(std::string newTelefono)
{
	telefono = newTelefono;
}



std::string Persona::getTelefono(void)
{
	return telefono;
}
void Persona::setDireccion(std::string newDireccion)
{
	direccion = newDireccion;
}



std::string Persona::getDireccion(void)
{
	return direccion;
}



Fecha Persona::getEdad(void)
{
	return edad;
}

void Persona::setEdad(Fecha newEdad)
{
	edad = newEdad;
}
void Persona::mostrarInformacion() {
	cout << "\n\n\tNombre: " << nombre << endl;
	cout << "\tApellido: " << apellido << endl;
	cout << "\tCedula: " << cedula << endl;
	cout << "\Correo electronico: " << correo << endl;
	cout << "\Telefono: " << telefono << endl;
	cout << "\Direccion: " << direccion << endl;
	//cout<< edad.toString()<<endl;
	//edad.toString();
}