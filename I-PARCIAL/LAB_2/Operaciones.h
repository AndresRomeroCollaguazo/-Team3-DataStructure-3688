/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados 
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/

#include "Data.h"

class Operations{
	private:
		Data<float> data_set;
	public:
		Operations()=default;
		float operator +();
		float operator -();
		Operations(Data<float>);
};	
