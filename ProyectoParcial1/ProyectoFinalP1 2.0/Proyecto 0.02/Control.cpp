#include <iostream>
#pragma warning(disable : 4996)
#include "Lista.h"
#include "Validate.h"
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include "Persona.h"
#include "Opciones.h"
#include "Amortination_Table.h"
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13

#define BACKSPACE 8
#define INTENTOS 3 
#include "Control.h"
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Control::viewMenu()
// Purpose:    Implementation of Control::viewMenu()
// Return:     void
////////////////////////////////////////////////////////////////////////
int Control::gotoxy(USHORT x, USHORT y) {
    COORD cp = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cp);
    return 0;
}
int Control::useMenu(const char titulo[], const char* opciones[], int n)
{
    int opcionSeleccionada = 1;  // Indica la opcionSeleccionada

    int tecla;

    bool repite = true; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER

    do {
        system("cls");
        //system("color 1e");
        dibujarCuadro(0, 0, 109, 39); //SE DIBUJA EL CUADRO PRINCIPAL
        dibujarCuadro(1, 1, 108, 7); //SE DIBUJA EL CUADRO DEL TITULO
        gotoxyS(30, 2); cout << "       <-> Universidad de Fuerzas Armadas <->     ";
        gotoxyS(30, 3); cout << "                  <-> ESPE <->                    ";
        gotoxyS(30, 4); cout << "<-> Departamento de Ciencias de la Computacion <->";
        gotoxyS(4, 6); cout << " INTEGRANTES:  Cantunia Michelle, Medina Martin, Perez Hamilton, Romero Andres y Valarezo Andres";

        gotoxy(5, 11 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el título del menú
        gotoxy(15, 9); cout << titulo;

        // Imprime las opciones del menú
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 12 + i); cout << i + 1 << ") " << opciones[i];
        }

        // Solo permite que se ingrese ARRIBA, ABAJO o ENTER

        do {
            tecla = onlyCharControl();
            // gotoxy(15, 15); cout << "tecla presionada: " << (char)tecla << " = " << tecla;
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

        switch (tecla) {

        case ARRIBA:   // En caso que se presione ARRIBA

            opcionSeleccionada--;

            if (opcionSeleccionada < 1) {
                opcionSeleccionada = n;
            }

            break;

        case ABAJO:
            opcionSeleccionada++;

            if (opcionSeleccionada > n) {
                opcionSeleccionada = 1;
            }

            break;

        case ENTER:
            repite = false;
            break;
        }

    } while (repite);

    return opcionSeleccionada;
}
int Control::useMenu2(const char titulo[], const char* admin[], int n)
{
    int opcionSeleccionada = 1;  // Indica la opcionSeleccionada

    int tecla;

    bool repite = true; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER

    do {
        system("cls");
        system("color 1e");

        dibujarCuadro(0, 0, 109, 39); //SE DIBUJA EL CUADRO PRINCIPAL
        dibujarCuadro(1, 1, 108, 6); //SE DIBUJA EL CUADRO DEL TITULO
        dibujarCuadro(2, 2, 107, 5); //SE DIBUJA EL CUADRO DEL TITULO DEL MENU
        gotoxyS(30, 3); cout << "<->          ..SISTEMA DE PRESTAMOS..          <->";
        gotoxyS(30, 4); cout << "<->       INGRESO UNICO DE ADMINISTRADOR       <->";

        gotoxy(5, 11 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el título del menú
        gotoxy(15, 10); cout << titulo;

        // Imprime las opciones del menú
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 12 + i); cout << i + 1 << ") " << admin[i];
        }

        // Solo permite que se ingrese ARRIBA, ABAJO o ENTER

        do {
            tecla = onlyCharControl();
            // gotoxy(15, 15); cout << "tecla presionada: " << (char)tecla << " = " << tecla;
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

        switch (tecla) {

        case ARRIBA:   // En caso que se presione ARRIBA

            opcionSeleccionada--;

            if (opcionSeleccionada < 1) {
                opcionSeleccionada = n;
            }

            break;

        case ABAJO:
            opcionSeleccionada++;

            if (opcionSeleccionada > n) {
                opcionSeleccionada = 1;
            }

            break;

        case ENTER:
            repite = false;
            break;
        }

    } while (repite);

    return opcionSeleccionada;
}
int Control::useMenu3(const char titulo[], const char* user[], int n)
{
    int opcionSeleccionada = 1;  // Indica la opcionSeleccionada

    int tecla;

    bool repite = true; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER

    do {
        system("cls");
        system("color 1e");

        dibujarCuadro(0, 0, 109, 39); //SE DIBUJA EL CUADRO PRINCIPAL
        dibujarCuadro(1, 1, 108, 6); //SE DIBUJA EL CUADRO DEL TITULO
        dibujarCuadro(2, 2, 107, 5); //SE DIBUJA EL CUADRO DEL TITULO DEL MENU
        gotoxyS(30, 3); cout << "<->          ..SISTEMA DE PRESTAMOS..          <->";
        gotoxyS(30, 4); cout << "<->          INGRESO UNICO DE USUARIO          <->";

        gotoxy(5, 11 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el título del menú
        gotoxy(15, 10); cout << titulo;

        // Imprime las opciones del menú
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 12 + i); cout << i + 1 << ") " << user[i];
        }

        // Solo permite que se ingrese ARRIBA, ABAJO o ENTER

        do {
            tecla = onlyCharControl();
            // gotoxy(15, 15); cout << "tecla presionada: " << (char)tecla << " = " << tecla;
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

        switch (tecla) {

        case ARRIBA:   // En caso que se presione ARRIBA

            opcionSeleccionada--;

            if (opcionSeleccionada < 1) {
                opcionSeleccionada = n;
            }

            break;

        case ABAJO:
            opcionSeleccionada++;

            if (opcionSeleccionada > n) {
                opcionSeleccionada = 1;
            }

            break;

        case ENTER:
            repite = false;
            break;
        }

    } while (repite);

    return opcionSeleccionada;
}

void Control::viewMenu(Lista* cuentas)
{
    bool repite = true;
    int opcion, opcion2, opcion3;

    // Titulo del menú y nombres de las opciones
    const char* titulo = "Grupo 3 association";
    const char* titulo2 = "Admin";
    const char* titulo3 = "User";
    const char* opciones[] = { "Administrador", "Usuario","Salir" };
    const char* admin[] = { "Crear Cuenta","Mostrar","Atras" };
    const char* user[] = { "Mostrar","Atras" };
    int n = 3;  // Numero de opciones
    int n2 = 3;
    int n3 = 2;
    Lista lst;
    Cuenta cuenta;
    char* cad = new char[10];
    int contador = 0;
    int contador2 = 0;
    bool ingresa = false;
    bool ingresa2 = false;
    Control c;
    int value;
    int value2;
    Opciones opc;
    
    Persona p;
    Validate va;
    vector<string> usuarios;
    vector<string> usuarios2;
    vector<string> claves;
    vector<string> claves2;
    Amortination_Table atable;
    string usuario, password;
    string usuario2, password2;
    usuarios.push_back("luis");//ADMIN
    claves.push_back("123456");//ADMIN
    usuarios2.push_back(p.getCorreo());//correo
    claves2.push_back(p.getCedula());//cedula

    for (;;)
    {
        opcion = useMenu(titulo, opciones, n);//se llama al menu
        switch (opcion)
        {
        case 1:

            system("CLS");
            //login
            do
            {
                system("cls");
                cout << "\t\t\tLOGIN DE ADMINISTRADOR" << endl;
                cout << "\t\t\t----------------------" << endl;
                cout << "\n\tUsuario: ";
                getline(cin, usuario);

                char caracter;

                cout << "\tPassword: ";
                caracter = getch();

                password = "";

                while (caracter != ENTER)
                {

                    if (caracter != BACKSPACE)
                    {
                        password.push_back(caracter);
                        cout << "*";
                    }
                    else
                    {
                        if (password.length() > 0)
                        {
                            cout << "\b \b";
                            password = password.substr(0, password.length() - 1);
                        }
                    }

                    caracter = getch();
                }

                for (int i = 0; i < usuarios.size(); i++)
                {
                    if (usuarios[i] == usuario && claves[i] == password)
                    {
                        ingresa = true;
                        break;
                    }
                }

                if (!ingresa)
                {
                    cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
                    cin.get();
                    contador++;
                }

            } while (ingresa == false && contador < INTENTOS);

            if (ingresa == false)
            {
                cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
                exit(3);
            }
            else
            {//aqui ya ingreso
                for (;;)
                {
                    opcion2 = useMenu2(titulo2, admin, n2);
                    switch (opcion2)
                    {
                    case 1:
                        system("cls");
                        cuenta = opc.IngresarnuevaCuenta(cuentas);
                        cuentas->insertarInicio(cuenta);
                        break;
                    case 2:
                        system("cls");
                        cuentas->toString();
                        system("pause");
                        break;
                    case 3:
                        c.viewMenu(cuentas);
                        break;


                    }//finswitch
                };//fin for

            } while (opcion > 0 && opcion < 4);//fin de ingreso
            //

            break;//fin del case principal

        case 2:
            system("CLS");
            //login
            do
            {
                system("cls");
                cout << "\t\t\tLOGIN DE USUARIO" << endl;
                cout << "\t\t\t----------------" << endl;
                cout << "\n\tUsuario: ";
                _getch();
                getline(cin, usuario2);
                char caracter2;

                cout << "\tPassword: ";
                caracter2 = getch();

                password2 = "";

                while (caracter2 != ENTER)
                {

                    if (caracter2 != BACKSPACE)
                    {
                        password2.push_back(caracter2);
                        cout << "*";
                    }
                    else
                    {
                        if (password2.length() > 0)
                        {
                            cout << "\b \b";
                            password2 = password2.substr(0, password2.length() - 1);
                        }
                    }

                    caracter2 = getch();
                }

                if (!cuentas->verificarUsuario(usuario2, password2))
                {
                    cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
                    cin.get();
                    contador2++;
                }

            } while (cuentas->verificarUsuario(usuario2, password2) == false && contador2 < INTENTOS);

            if (cuentas->verificarUsuario(usuario2, password2) == false) {
                cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
                exit(3);
            }
            else
            {//aqui ya ingreso
                for (;;)
                {
                    system("CLS");
                    opcion3 = useMenu3(titulo3, user, n3);
                    switch (opcion3)
                    {
                    case 1:
                        system("cls");
                        atable.generateAmortitation(cuentas->retornarUsuario(usuario2, password2));
                        system("pause");
                        break;
                    case 2:
                        c.viewMenu(cuentas);
                        break;

                    }
                };
            } while (opcion > 0 && opcion < 4);//fin de ingreso
            break;//fin del case principal

        case 3:
            cout << "\n" << endl;
            system("pause");
            cout << "Adios, fue un gusto atenderlo.." << endl;
            exit(3);//si funciona
            break;
        }
    };
}

char* Control::onlyIntControl(const char* msj)
{
    char datos[10];

    int i = 0;
    char c;
    printf("%s", msj);
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            printf("%c", c);
            datos[i++] = c;
        }
    }
    return datos;

}


char Control::onlyCharControl(void)
{
    char c = 0;
    DWORD modo = NULL, contador;
    HANDLE ih = GetStdHandle(STD_INPUT_HANDLE);

    // Desactivamos escritura en terminal
    SetConsoleMode(ih, modo & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT));

    ReadConsoleA(ih, &c, 1, &contador, NULL);

    if (c == 0) {
        ReadConsoleA(ih, &c, 1, &contador, NULL);
    }

    SetConsoleMode(ih, modo); // Devolvemos control normal

    return c;
}

void Control::gotoxyS(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}


//FUNCION QUE DIBUJA EL CUADRO
void Control::dibujarCuadro(int x1, int y1, int x2, int y2) {
    int i;

    for (i = x1; i < x2; i++) {
        gotoxyS(i, y1); cout << "\304"; //linea horizontal superior
        gotoxyS(i, y2); cout << "\304"; //linea horizontal inferior
    }

    for (i = y1; i < y2; i++) {
        gotoxyS(x1, i); cout << "\263"; //linea vertical izquierda
        gotoxyS(x2, i); cout << "\263"; //linea vertical derecha
    }

    gotoxyS(x1, y1); cout << "\332";
    gotoxyS(x1, y2); cout << "\300";
    gotoxyS(x2, y1); cout << "\277";
    gotoxyS(x2, y2); cout << "\331";
}