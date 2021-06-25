#include "Cuenta.h"
#include "FechaAmortinadas.h"
#include <string>
#include "Nodo.h"
#include "Persona.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

Cuenta::Cuenta() {

}

string Cuenta::getId() {
	return id;
}

void Cuenta::setId(string newId) {
	id = newId;
}

Persona Cuenta::getPersona() {
	return persona;
}
void Cuenta::setPersona(Persona newPersona) {
	persona = newPersona;
}

void Cuenta::setCuotas(int _cuotas) {
	cuotas = _cuotas;
}

int Cuenta::getCuotas() {
	return cuotas;
}

void Cuenta::setInterest(double _interest) {
	interest = _interest;
}

double Cuenta::getInterest() {
	return interest;
}

void Cuenta::setDeuda(double _deuda) {
	deuda = _deuda;
}

double Cuenta::getDeuda() {
	return deuda; 
}

void Cuenta::setFecha(FechaAmortinadas _fecha) {
	fdate = _fecha;
}

FechaAmortinadas Cuenta::getFecha() {
	return fdate;
}

void Cuenta::mostrarInformacion(void)
{

	///  -> AQUI VA PARA GENERAR LOS DATOS EN LOS TXT Y .PDF
	ofstream archivo, archivo2;

	//nombre = i;
	archivo.open(persona.getCedula() + ".txt", ios::out);//cambiar por cedula
	archivo2.open(persona.getCedula() + ".pdf", ios::out);
	////
	////
	cout << "\t----------------------------------------------------" << endl;
	archivo << "\t----------------------------------------------------\n";/////
	archivo2 << "\t----------------------------------------------------\n";/////
	cout << "\tPropietario: " << this->persona.getNombre() << " " << this->persona.getApellido() << endl;
	archivo << "\n\tPropietario: " << this->persona.getNombre() << this->persona.getApellido();///
	archivo2 << "\n\tPropietario: " << this->persona.getNombre() << this->persona.getApellido();///
	cout << "\tCedula: " << this->persona.getCedula() << endl;
	archivo << "\n\tCedula: " << this->persona.getCedula();///
	archivo2 << "\n\tCedula: " << this->persona.getCedula();///
	cout << "\tEdad: " << this->persona.getEdad().get_anio() << " anios " << this->persona.getEdad().get_mes() << " meses " << this->persona.getEdad().get_dia() << " dias " << endl;
	archivo << "\n\tEdad: " << this->persona.getEdad().get_anio() << " anios " << this->persona.getEdad().get_mes() << " meses " << this->persona.getEdad().get_dia() << " dias ";
	archivo2 << "\n\tEdad: " << this->persona.getEdad().get_anio() << " anios " << this->persona.getEdad().get_mes() << " meses " << this->persona.getEdad().get_dia() << " dias ";
	cout << "\tCorreo del propietario: " << this->persona.getCorreo() << endl;
	archivo << "\n\tCorreo del propietario: " << this->persona.getCorreo();////
	archivo2 << "\n\tCorreo del propietario: " << this->persona.getCorreo();////
	cout << "\tTelefono del propietario: " << this->persona.getTelefono() << endl;
	archivo << "\n\tTelefono del propietario: " << this->persona.getTelefono();////
	archivo2 << "\n\tTelefono del propietario: " << this->persona.getTelefono();////
	cout << "\tDireccion del propietario: " << this->persona.getDireccion() << endl;
	archivo << "\n\tDireccion del propietario: " << this->persona.getDireccion();///
	archivo2 << "\n\tDireccion del propietario: " << this->persona.getDireccion();///
	cout << "\tDeuda: " << this->deuda << endl;
	archivo << "\n\tDeuda: " << this->deuda;///
	archivo2 << "\n\tDeuda: " << this->deuda;///
	cout << "\tInteres porcentual: " << this->interest << endl;
	archivo << "\n\tInteres porcentual: " << this->interest;//
	archivo2 << "\n\tInteres porcentual: " << this->interest;//
	cout << "\tPlazos mensuales: " << this->cuotas << endl;
	archivo << "\n\tPlazos mensuales: " << this->cuotas;//
	archivo2 << "\n\tPlazos mensuales: " << this->cuotas;//
	cout << "\tFecha del prestamo: " << this->fdate.getDay() << " - " << this->fdate.getMonth() << " - " << this->fdate.getYear() << endl;
	archivo << "\n\tFecha del prestamo: " << this->fdate.getDay() << " - " << this->fdate.getMonth() << " - " << this->fdate.getYear();//
	archivo2 << "\n\tFecha del prestamo: " << this->fdate.getDay() << " - " << this->fdate.getMonth() << " - " << this->fdate.getYear();//
	archivo << "\n\t----------------------------------------------------";
	archivo2 << "\n\t----------------------------------------------------";
	cout << "\t----------------------------------------------------" << endl;
	archivo.close();
	archivo2.close();
}