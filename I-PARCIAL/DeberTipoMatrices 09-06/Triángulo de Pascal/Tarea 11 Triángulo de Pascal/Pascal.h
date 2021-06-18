/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Grupo3
Deber de Triangulo de Pascal
Fecha creación : 04 / 06 / 2021
Fecha de modificación : 18 / 06 / 2021 */

#if !defined(__UML_Class_Diagram_Pascal_Pascal_h)
#define __UML_Class_Diagram_Pascal_Pascal_h

class Pascal
{
public:
	Pascal(int, int);
	Pascal();
	void graficPascal(int**);
	void verify();
	int fact(int);
	int combination(int, int);
	void pascal(int, int, int**, int);
	int get_n();
	void set_n(int);
	void pool(int**);

protected:
private:
	int n;
	int res;


};

#endif