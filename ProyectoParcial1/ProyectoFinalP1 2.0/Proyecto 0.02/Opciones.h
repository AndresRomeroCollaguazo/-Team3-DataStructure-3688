#include "Lista.h"


#pragma once

class Opciones
{
public:
	Cuenta IngresarnuevaCuenta(Lista* cuentas);
	void mostarCuentas(Lista* cuentas);
	void buscarCuenta(Lista* cuentas);
	bool buscar(Lista* cuentas, string);
	Cuenta buscarYTraer(Lista* cuentas, string);

};
