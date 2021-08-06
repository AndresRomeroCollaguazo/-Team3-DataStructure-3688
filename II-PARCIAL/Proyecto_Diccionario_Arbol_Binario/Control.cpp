/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Proyecto Diccionario Ingles-Español
Fecha creación: 20/07/2021
Fecha de modificación: 31/07/2021 */
#include <iostream>
#pragma warning(disable : 4996)
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <locale.h>
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13
#include "Control.h"
#include "Arbol.h"
#include "IngresoDatos.h"

using namespace std;
typedef Arbol* arbol;
Arbol aux;
void insertarSubcadena(char* original, char* subcadena, int indice) {
    // El inicio es copiar la original N caracteres definidos por posición
    char inicio[100] = "";
    strncpy(inicio, original, indice);
    // El final es copiar desde la posición N caracteres definidos por los sobrantes
    char fin[100] = "";
    strncpy(fin, original + indice, strlen(original) - indice);
    // Agregar la subcadena al inicio
    strcat(inicio, subcadena);
    // Y agregar el fin a la anterior cadena, es decir, al inicio
    strcat(inicio, fin);
    // Copiarla dentro de la cadena recibida
    strcpy(original, inicio);
}

void llenarArbol(arbol& arbolIn, arbol& arbolEs) {
    string line;
    fstream archivo;

    archivo.open("base.txt", fstream::in);

    ifstream file("base.txt");

    if (file.is_open())
    {
        while (getline(file, line))
        {
            int id = atoi(line.substr(0, line.find("	")).c_str());
            string words = line.substr(line.find("	") + 1, line.length());
            aux.insertar(arbolIn, id, words.substr(0, words.find("	")));
            aux.insertar(arbolEs, id, words.substr(words.find("	") + 1, words.length()));
        }
        file.close();
        archivo.close();
    }
}

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
        system("color 1e");
        //dibujarCuadro(1, 1, 109, 20); //SE DIBUJA EL CUADRO PRINCIPAL
        //dibujarCuadro(2, 2, 108, 8); //SE DIBUJA EL CUADRO DEL TITULO
        gotoxy(30, 3); cout << "       <-> Universidad de Fuerzas Armadas <->     ";
        gotoxy(30, 4); cout << "                  <-> ESPE <->                    ";
        gotoxy(30, 5); cout << "<-> Departamento de Ciencias de la Computacion <->";
        gotoxy(4, 7); cout << " INTEGRANTES:  Cantunia Michelle, Medina Martin, Perez Hamilton, Romero Andres y Valarezo Andres";
        gotoxy(5, 10 + opcionSeleccionada); cout << "==>" << endl;

        // Imprime el título del menú
        gotoxy(15, 10); cout << titulo;

        // Imprime las opciones del menú
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 11 + i); cout << i + 1 << ") " << opciones[i];
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

void Control::viewMenu(void)
{
    std::setlocale(LC_ALL, "¨Spanish");// Cambiar locale - Suficiente para máquinas Linux
   SetConsoleCP(1252); // Cambiar STDIN -  Para máquinas Windows
    SetConsoleOutputCP(1252); // Cambiar STDOUT - Para máquinas Windows
    
    bool repite = true;
    int opcion;
    string palabra, traduccion;
    arbol arbolIn=NULL;
    arbol arbolEs=NULL;
    llenarArbol(arbolIn, arbolEs);
    // Titulo del menú y nombres de las opciones
    const char* titulo = "MENU DE OPCIONES";
    const char* opciones[] = { "Traducir de Ingles a Español", "Traducir de Español a Ingles", "Salir" };
    int n = 3;  // Numero de opciones
    char* cad = new char[10];
    char* cad2 = new char[10];
    Control c;
   // std::setlocale(LC_ALL, ".UTF-8");
    IngresoDatos in;
    int value;
    int value2;
    bool x=false,x1=false;
    string ca;
    string suma,suma1;
    do {
        opcion = useMenu(titulo, opciones, n);

        switch (opcion) {
        case 1:

            system("CLS");
            suma = " ";
            
            do {
                x = false;
                palabra = in.IngresoTexto1("Ingrese una palabra en ingles: ");

                for (int i = 0; i < palabra.length(); i++) {
                    palabra[i] = tolower(*(palabra.c_str() + i));
                }

                string resp;
                //Inglés a español.

                traduccion = aux.Traducir(arbolIn, arbolEs, palabra);
                char* str = (char*)traduccion.c_str();
                for (int i = 0; i < traduccion.size(); i++)
                {
                    if (*(str + i) == 'e'&& *(str + i+1) == '&')
                    {
                        *(str + i) = 'é';
                    }
                    if (*(str + i) == 'a' && *(str + i + 1) == '&')
                    {
                        *(str + i) = 'á';
                    }
                    if (*(str + i) == 'i' && *(str + i + 1) == '&')
                    {
                        *(str + i) = 'í';
                    }
                    if (*(str + i) == 'o' && *(str + i + 1) == '&')
                    {
                        *(str + i) = 'ó';
                    }
                    if (*(str + i) == 'u' && *(str + i + 1) == '&')
                    {
                        *(str + i) = 'ú';
                    }
                    if (*(str + i) == 'n' && *(str + i + 1) == '&')
                    {
                        *(str + i) = 'ñ';
                    }
                }

                
                char* token = strtok(str, "&");
                while (token != NULL)
                {
                    
                    string aux(token);
                   
                    resp = resp +  aux;
                    token = strtok(NULL, "&");
                   
                }
                suma = suma + " " + traduccion;
                 cout << "\nTraduccion: " << traduccion << endl;
               
                cout << "\nDesea ingresar otra palabra (s/n) ?" << endl;
               
                ca = in.IngresoTexto();
                if (*ca.c_str() == 'n')
                {
                    x =  true;
                    cout << "\nLa traduccion completa es -> " << suma << endl;
                }
            } while (x != true);
            system("pause");
            break;


        case 2:

            system("CLS");
            suma1 = " ";
            do {
                x1 = false;
               palabra = in.IngresoTexto("Ingrese una palabra en español: ");
                
               
                char* str = (char*)malloc(palabra.size() + palabra.size() * sizeof(int));
                str = (char*)palabra.c_str();
                 
               for (int i = 0; i < palabra.size()+ palabra.size(); i++)
               {
                   if (*(str + i) == 'é')
                   {
                       *(str + i) = 'e';
                       insertarSubcadena(str, "&", i + 1);
                   }
                   if (*(str + i) == 'á')
                   {
                       *(str + i) = 'a';
                       insertarSubcadena(str, "&", i + 1);
                   }
                   if (*(str + i) == 'í')
                   {
                       *(str + i) = 'i';
                       insertarSubcadena(str, "&", i + 1);
                   }
                   if (*(str + i) == 'ó')
                   {
                       *(str + i) = 'o';
                       insertarSubcadena(str, "&", i + 1);
                   }
                   if (*(str + i) == 'ú')
                   {
                       *(str + i) = 'u';
                       insertarSubcadena(str, "&", i + 1);
                   }
                   if (*(str + i) == 'ñ')
                   {
                       *(str + i) = 'n';
                       insertarSubcadena(str, "&", i + 1);
                   }
               }
               string palabra1(str);
          
              
                for (int i = 0; i < palabra.length(); i++) {
                    palabra[i] = tolower(*(palabra.c_str() + i));
                }
         
                


                //Español a inglés.
                traduccion = aux.Traducir(arbolEs, arbolIn, palabra1);
                suma1 = suma1 + " " + traduccion;
                cout << "\nTraduccion: " << traduccion << endl;


                
                cout << "\nDesea ingresar otra palabra (s/n) ?" << endl;

                ca = in.IngresoTexto();
                if (*ca.c_str() == 'n')
                {
                    x1 = true;
                    cout << "\nLa traduccion completa es -> " << suma1 << endl;
                }
            } while (x1 != true);
           
           
            system("pause");
            break;

        case 3:
            system("CLS");
            cout << "\nEl programa se cerrara!! ADIOS" << endl; //SALIR
            repite = false;
            system("pause>nul");
            break;
        } 
    } while (repite);
}
////////////////////////////////////////////////////////////////////////
// Name:       Control::onlyIntControl(int _value)
// Purpose:    Implementation of Control::onlyIntControl()
// Parameters:
// - _value
// Return:     void
////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////
// Name:       Control::onlyCharControl(char _value)
// Purpose:    Implementation of Control::onlyCharControl()
// Parameters:
// - _value
// Return:     void
////////////////////////////////////////////////////////////////////////
void Control::dibujarCuadro(int x1, int y1, int x2, int y2) {
    int i;

    for (i = x1; i < x2; i++) {
        gotoxy(i, y1); cout << "\304"; //linea horizontal superior
        gotoxy(i, y2); cout << "\304"; //linea horizontal inferior
    }

    for (i = y1; i < y2; i++) {
        gotoxy(x1, i); cout << "\263"; //linea vertical izquierda
        gotoxy(x2, i); cout << "\263"; //linea vertical derecha
    }

    gotoxy(x1, y1); cout << "\332";
    gotoxy(x1, y2); cout << "\300";
    gotoxy(x2, y1); cout << "\277";
    gotoxy(x2, y2); cout << "\331";
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

string validarPalabra(string c)
{
    for each (char i in c)
    {
        
    }
    return c;
}

