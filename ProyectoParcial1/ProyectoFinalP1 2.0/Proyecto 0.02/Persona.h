#pragma once

#include <string>
#include "Fecha.h"
using namespace std;

class Persona
{

public:
	std::string getNombre(void);
	void setNombre(std::string newNombre);
	std::string getApellido(void);
	void setApellido(std::string newApellido);
	std::string getCedula(void);
	void setCedula(std::string newCedula);
	std::string getCorreo(void);
	void setCorreo(std::string newCorreo);
	void setTelefono(std::string newTelefono);
	std::string getTelefono(void);
	void setDireccion(std::string newDireccion);
	std::string getDireccion(void);
	Fecha getEdad(void);
	void setEdad(Fecha newEdad);
	void mostrarInformacion();


protected:
private:
	std::string nombre;
	std::string apellido;
	std::string cedula;
	std::string correo;
	std::string telefono;
	std::string direccion;
	Fecha edad;
};
