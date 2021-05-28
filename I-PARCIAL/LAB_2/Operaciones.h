/***********************************************************************
 * Module:  Operaciones.h
 * Author:  avand
 * Modified: miércoles, 26 de mayo de 2021 15:38:43
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/

#include "Datos.h"

class Operaciones{
	private:
		Datos<float> datoConjunto;
	public:
		Operaciones()=default;
		float operator +();
		float operator -();
		Operaciones(Datos<float>);
};
	
