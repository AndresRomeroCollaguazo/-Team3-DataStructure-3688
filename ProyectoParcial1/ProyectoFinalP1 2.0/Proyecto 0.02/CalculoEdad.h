#pragma once

#include"Fecha.h"
#include<iostream>

class CalculoEdad
{

public:
	CalculoEdad();
	Fecha DiferenciaEntreFechas();
	void setNacimiento(Fecha);

private:

	Fecha actual;
	Fecha nacimiento;


};
