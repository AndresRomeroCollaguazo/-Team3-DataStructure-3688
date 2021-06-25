#pragma once
#include "Lista.h"
#include <iostream>

using namespace std;

class Transferencia
{
public:
	virtual void movimiento(Lista*, string) = 0;
};
