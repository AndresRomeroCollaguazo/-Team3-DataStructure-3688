#include "Opciones.h"
#include "IngresoDatos.h"
#include "Generador.h"
#include "CalculoEdad.h"
#include "Validate.h"
#include <iostream>
#include "FechaAmortinadas.h"
#include "OperationsAmortization.h"
#define DEPOSITO_INICIAL  5.0f  
#define DEPOSITO_MINIMO 5.0f

using namespace std;


Cuenta Opciones::IngresarnuevaCuenta(Lista* cuentas) {

	system("cls");
	Fecha fechaNacimiento, objFecha;
	Cuenta cuenta;
	IngresoDatos ingreso;
	double prestamo, interes;
	int cuotas;
	FechaAmortinadas date;
	CalculoEdad edad;
	Persona persona;
	Generador generador;
	Validate va;
	OperationsAmortization op;
	string dato = "";
	int tipoCuenta = 0;
	string dia, mes, anio;
	int diaEspecial = 28;
	float saldo;
	bool bandera = false;
	int dias_meses[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	objFecha.generar_fecha();

	system("cls");
	do {

		dato = ingreso.IngresoTexto("Ingrese el nombre:     \b ");
		persona.setNombre(dato);
	} while (dato == "");

	do
	{

		dato = ingreso.IngresoTexto("Ingrese el apellido:    \b");
		persona.setApellido(dato);
	} while (dato == "");

	do
	{

		try
		{

			dato = ingreso.IngresoNumero("Ingrese numero de cedula:     \b");

			persona.setCedula(dato);

		}
		catch (const std::exception&)
		{
			dato = "";
		}
	} while (dato == "" || dato.size() != 10 || !ingreso.validarCedula(dato) || !cuentas->verCedulas(dato));


	do
	{

		try
		{
			dato = ingreso.IngresoNumero("Ingrese numero de telefono:       \b");
			persona.setTelefono(dato);
		}
		catch (const std::exception&)
		{
			dato = "";
		}


	} while (dato == "" || dato.size() != 10 || !cuentas->verTelefono(dato));
	do
	{

		dato = ingreso.IngresoTexto("Ingrese la direccion de domicilio:    \b");
		persona.setDireccion(dato);
	} while (dato == "");

	do {
		do
		{

			anio = ingreso.IngresoNumero("Ingrese su anio de nacimiento: (AAAA):      \b\b\b\b\b\b");


		} while (anio.size() != 4);
	} while (stoi(anio) <= (objFecha.get_anio() - 100) || stoi(anio) >= (objFecha.get_anio() - 18));




	if (ingreso.anioBisiesto(stoi(anio))) {
		diaEspecial = 29;
	}

	do
	{

		mes = ingreso.IngresoNumero("Ingrese su mes de nacimiento: (mm):     \b\b\b\b\b");

	} while (mes.size() != 2 || stoi(mes) <= 0 || stoi(mes) > 12);


	do
	{

		dia = ingreso.IngresoNumero("Ingrese su dia de nacimiento (dd):     \b\b\b\b\b ");
		if (ingreso.anioBisiesto(stoi(anio)) && stoi(mes) == 2) {
			diaEspecial = 29;
		}
		else
		{
			diaEspecial = dias_meses[stoi(mes) - 1];
		}

	} while (dia.size() != 2 || stoi(dia) <= 0 || stoi(dia) > diaEspecial);


	fechaNacimiento.setDia(stoi(dia)); // = new Fecha(stoi(dia), stoi(mes), stoi(anio));
	fechaNacimiento.setMes(stoi(mes));
	fechaNacimiento.setAnio(stoi(anio));

	edad.setNacimiento(fechaNacimiento);
	persona.setEdad(edad.DiferenciaEntreFechas());

	dato = generador.crearCorreo(persona.getApellido(), persona.getNombre(), cuentas);
	cout << "\n\t Correo: " << dato << endl;
	persona.setCorreo(dato);

	cout << " \n\tIngrese la fecha del prestamo ->";
	date = op.enter_Date();
	cout << " " << endl;
	do {
		cout << " \nIngrese la cantidad del prestamo (100-50000)->";
		prestamo = va.select_Validate();
	} while (prestamo > 50000 || prestamo < 100);
	cout << "\n" << endl;
	do {
		cout << " \nIngrese la tasa de interes acordada (/100)% ->";
		interes = va.validate_R();
	} while (interes > 100 || interes < 0);
	cout << "\n" << endl;

	do {
		cout << " \nIngrese a cuantas cuotas desea diferir (1-12)->";
		cuotas = va.validate_R();
	} while (cuotas > 12 || cuotas < 1);

	cuenta.setFecha(date);
	cuenta.setDeuda(prestamo);
	cuenta.setInterest(interes);
	cuenta.setCuotas(cuotas);

	cuenta.setPersona(persona);


	cout << endl << "\t";

	system("pause");


	return cuenta;

}


void Opciones::buscarCuenta(Lista* cuentas) {
	string cuenta;
	Cuenta cuenta1;

	system("cls");

	cout << "Ingrese su numero de cuenta" << endl;
	cin >> cuenta;
	cuenta1 = buscarYTraer(cuentas, cuenta);


	if (cuenta1.getId() != "") {
		cuenta1.mostrarInformacion();
	}
	else
	{
		cout << "No existe el numero de cuenta...." << endl;
	}

	cout << "\n\t";
	system("pause");
}

void Opciones::mostarCuentas(Lista* cuentas) {

	system("cls");

	cuentas->toString();
	cout << "\n\t";
	cout << "\n\t";
	system("pause");

}
bool Opciones::buscar(Lista* cuentas, string id) {

	Nodo* aux = new Nodo();
	Nodo* aux1 = new Nodo();

	aux = cuentas->getNodo();

	bool respuesta = false;
	while (aux != NULL)
	{
		if (aux->getCuenta().getId() == id) {
			respuesta = true;

		}

		aux1 = aux;
		aux = aux->getSiguiente();
	}

	return respuesta;
}

Cuenta Opciones::buscarYTraer(Lista* cuentas, string id) {
	Nodo* aux = new Nodo();
	Cuenta auxCuenta;
	aux = cuentas->getNodo();

	while (aux != NULL)
	{

		if (id == aux->getCuenta().getId()) {
			auxCuenta = aux->getCuenta();
			//auxCuenta.mostrarInformacion();
			return auxCuenta;
		}

		aux = aux->getSiguiente();
	}

	return auxCuenta;
}