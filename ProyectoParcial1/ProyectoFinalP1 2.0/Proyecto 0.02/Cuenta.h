#pragma once

//#include <string>
#include "Persona.h"

#include "FechaAmortinadas.h"


class Cuenta
{

public:
	Cuenta();
	void mostrarInformacion(void);
	string getId();
	void setId(string);
	Persona getPersona();
	void setPersona(Persona);
	void setCuotas(int);
	int getCuotas();
	void setInterest(double);
	double getInterest();
	void setDeuda(double);
	double getDeuda();
	void setFecha(FechaAmortinadas);
	FechaAmortinadas getFecha();
	enum TipoDeCuenta {
		Ahorros = 1,
		Corriente = 2
	};
protected:
private:
	std::string id;
	Persona persona;
	int cuotas;
	double interest;
	double deuda;
	FechaAmortinadas fdate;
	//bool tarjeta;


};

