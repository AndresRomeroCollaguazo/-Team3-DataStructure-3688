/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 27/05/2021
Fecha modificación: 27/05/2021*/


#if !defined(__Class_Diagram_1_Datos_h)
#define __Class_Diagram_1_Datos_h
template <typename Datum>
class Data
{
public:
	Data() = default;
	Data(Datum datum_A, Datum datum_B);
	Datum get_Datum_A(void);
	 void set_Datum_A(Datum datum_A);
   	Datum get_Datum_B(void);
   	void set_Datum_B(Datum datum_B);
   	~Data();
protected:
private:
   	Datum datum_A;
   	Datum datum_B;
};
#endif
