#pragma once
#include "FechaAmortinadas.h"
#include "Persona.h"
#include<string>
class OperationsAmortization
{
public:
	bool is_laborable(FechaAmortinadas date);
	int generate_Week_Day(FechaAmortinadas date);
	void print(FechaAmortinadas*, int dues, std::string*, Persona p);
	FechaAmortinadas enter_Date();
	bool is_Leap(int year);
};

