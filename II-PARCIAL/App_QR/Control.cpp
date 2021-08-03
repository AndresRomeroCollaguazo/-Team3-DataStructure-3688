//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de QR
//  Fecha creación : 1 / 07 / 2021
//  Fecha de modificación : 3 / 07 / 2021  

#pragma warning(disable : 4996)
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <random>
#include "Control.h"
#include <climits>
#include <cstring>
#include <sstream>
#include <string>
#include <vector>
#include "qrcodegen.h"
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3 
using namespace std;
using std::uint8_t;
using qrcodegen::QrCode;
using qrcodegen::QrSegment;

static void doBasicDemo();
static std::string toSvgString(const QrCode& qr, int border);
static void printQr(const QrCode& qr);


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

        // Imprime el t�tulo del men�
        gotoxy(15, 9); cout << titulo;

        // Imprime las opciones del men�
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

        // Imprime el t�tulo del men�
        gotoxy(15, 10); cout << titulo;

        // Imprime las opciones del men�
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
        gotoxyS(30, 3); cout << "<->          ..Ordenamientos..          <->";
        gotoxyS(30, 4); cout << "<->          INTERNOS Y EXTERNOS          <->";

        gotoxy(5, 11 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el t�tulo del men�
        gotoxy(15, 10); cout << titulo;

        // Imprime las opciones del men�
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

void Control::viewMenu()
{
    bool repite = true;
    int opcion, opcion2, opcion3;

    // Titulo del menU y nombres de las opciones
    const char* titulo = "Grupo 3 Qr";
    const char* opciones[] = { "Generar QR","Salir" };
    int n = 2;  // Numero de opciones
    char* cad = new char[10];
    int contador = 0;
    int contador2 = 0;
    bool ingresa = false;
    bool ingresa2 = false;
    Control c;
    int value;
    int value2;

    for (;;)
    {
        opcion = useMenu(titulo, opciones, n);//se llama al menu
        switch (opcion)
        {
        case 1: {
            system("CLS");
            cout << "\n" << endl;
            cout << " \t\t\t\333     QR     \333 " << endl;
           
            system("COLOR B0");
            doBasicDemo();
            system("color 7");
            cout << "QR generado correctamente" << endl;
            system("pause");
            break;//fin del case principaL

        case 2:
        {
            cout << "\n" << endl;
            system("pause");
            cout << "Adios, fue un gusto atenderlo.." << endl;
            exit(3);//si funciona
        }
        break;
        }
        };
    }
}
int Control::onlyIntControl(const char* msj){
    char* datos = new char[10];

    int i = 0;
    int a = 0;
    char c;
    printf("%s", msj);
    std::cout << endl;
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            std::cout << c;
            *(datos + i++) = c;
        }
    }
    a = atoi(datos);
    return a;

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

/////
/*---- Demo suite ----*/

// Creates a single QR Code, then prints it to the console.
static void doBasicDemo() {
    cout << "Ingrese los datos :" << endl;
    system("color 5");
    const char* text="HOLAA";
    
    const QrCode::Ecc errCorLvl = QrCode::Ecc::LOW;  // Error correction level

    // Make and print the QR Code symbol
    const QrCode qr = QrCode::encodeText(text, errCorLvl);
    printQr(qr);
    //std::cout << toSvgString(qr, 4) << std::endl;
}

/*---- Utilities ----*/

// Returns a string of SVG code for an image depicting the given QR Code, with the given number
// of border modules. The string always uses Unix newlines (\n), regardless of the platform.
static std::string toSvgString(const QrCode& qr, int border) {
    if (border < 0)
        throw std::domain_error("Border must be non-negative");
    if (border > INT_MAX / 2 || border * 2 > INT_MAX - qr.getSize())
        throw std::overflow_error("Border too large");

    std::ostringstream sb;
    sb << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    sb << "<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\" \"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\n";
    sb << "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\" viewBox=\"0 0 ";
    sb << (qr.getSize() + border * 2) << " " << (qr.getSize() + border * 2) << "\" stroke=\"none\">\n";
    sb << "\t<rect width=\"100%\" height=\"100%\" fill=\"#FFFFFF\"/>\n";
    sb << "\t<path d=\"";
    for (int y = 0; y < qr.getSize(); y++) {
        for (int x = 0; x < qr.getSize(); x++) {
            if (qr.getModule(x, y)) {
                if (x != 0 || y != 0)
                    sb << " ";
                sb << "M" << (x + border) << "," << (y + border) << "h1v1h-1z";
            }
        }
    }
    sb << "\" fill=\"#000000\"/>\n";
    sb << "</svg>\n";
    return sb.str();
}


// Prints the given QrCode object to the console.
static void printQr(const QrCode& qr) {
    int border = 4;

    for (int y = -border; y < qr.getSize() + border; y++) {
        for (int x = -border; x < qr.getSize() + border; x++) {
            std::cout << (qr.getModule(x, y) ? "\333\333" : "  ");
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}