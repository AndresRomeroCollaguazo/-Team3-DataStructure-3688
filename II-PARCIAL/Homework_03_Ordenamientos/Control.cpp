#pragma warning(disable : 4996)
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include "Intercalacion_Archivo.h"
#include <string>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "Vector.h"
#include "NaturalSort.h"
#include <random>
#include "Control.h"
#include "CountSort.h"
#include "Quicksort.h"
#include "burbuja.h"
#include "Sellshort.h"
#include "Peine.h"
#define ARRIBA 'w'
#define ABAJO 's'
#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3 
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
    
    // Titulo del men� y nombres de las opciones
    const char* titulo = "Grupo 3 Ordenamientos";
    const char* opciones[] = { "Shell","Quick Sort","Insercion Directa","Insercion Binaria","Heap Sort","Metodo de seleccion","Radix Sort","Burbuja","Sell Sort","Directo","Metodo natural","Metodo de intercalacion","Distribucion","Peine","Gnomo","Salir" };
    int n = 16;  // Numero de opciones
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
        case 1:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      SHELLSHORT      " << endl;
            
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);

            Vector<int> numeros;
            numeros.rellenar(p, []() {
		    std::random_device rd;
		    std::mt19937 mt(rd());
		    std::uniform_real_distribution<double> dist(1, 1000);
		        return dist(mt);
		    });
            std::cout << std::endl ;
	        std::cout << "ARREGLO DESORDENADO" << std::endl;
	        for (int numero: numeros)
	        {
		        std::cout << " | " << numero ;
	        }
            std::cout << " " << std::endl;

            numeros.shell();

            std::cout << "ARREGLO ORDENADO" << std::endl;
	        numeros.recorrer([](int valor)
		    {
                if( valor == 0 ){
                    return;
                } else {
			    std::cout << " | " << valor ;
                }
		    });

            std::cout << " " << std:: endl ;
        }
            _getch();break;//fin del case principal

        case 2:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      QUICK SORT     " << endl;
            QuickSort<int> qr = QuickSort<int>();
            Vector<int> vec;
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);

            Vector<int> a(p);
            vec = a;
            vec.generar(p);
            std::cout << "Vector desordenado" << std::endl;
            vec.imprimir();
            qr.ordenar(vec.getVector(), 0, p - 1);
            std::cout << std::endl ;
            std::cout << std::endl << "Vector ordenado" << std::endl;
            vec.imprimir();
            delete[] vec.getVector();
        }
            _getch();break;//fin del case principal
        
        case 3:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      INSERCION DIRECTA      " << endl;
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
            Vector<int> numeros;
	        numeros.rellenar(p, []() {
		    std::random_device rd;
		    std::mt19937 mt(rd());
		    std::uniform_real_distribution<double> dist(1, 1000);
		        return dist(mt);
		    });

	        std::cout << "ARREGLO DESORDENADO" << std::endl;
	        for (int numero: numeros)
	        {
		        std::cout << " | " << numero ;
	        }
            std::cout << " " << std::endl;
    
            numeros.directInsecion([](int a , int b , int c){
                return (a >= 0 && b > c);
	        });
            std::cout << std::endl ;
            std::cout << "ARREGLO ORDENADO" << std::endl;
            numeros.recorrer([](int valor)
		    {
                if( valor == 0 ){
                    return;
                } else {
			    std::cout << " | " << valor  ;
                }
		    });

            std::cout << " " << std:: endl ;
        }
            _getch();break;//fin del case principal
        
        case 4:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      INSERCION BINARIA      " << endl;
            Vector<int> numeros;
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
            numeros.rellenar(p, []() {
		    std::random_device rd;
		    std::mt19937 mt(rd());
		    std::uniform_real_distribution<double> dist(1, 1000);
		        return dist(mt);
		    });

	        std::cout << "ARREGLO DESORDENADO" << std::endl;
	        for (int numero: numeros)
	        {
		        std::cout << " | " << numero  ;
	        }
            std::cout << " " << std::endl;
    
            numeros.ordenamientoInsercionBinaria();
            std::cout << std::endl ;
            std::cout << "ARREGLO ORDENADO" << std::endl;
            numeros.recorrer([](int valor)
		    {
                if( valor == 0 ){
                    return;
                } else {
			    std::cout << " | " << valor  ;
                }
		    });

            std::cout << " " << std:: endl ;
        }
            _getch();break;//fin del case principal
        
        case 5:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      HEAP SORT      " << endl;
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
            Vector<int> numeros;
            numeros.rellenar(p, []() {
		    std::random_device rd;
		    std::mt19937 mt(rd());
		    std::uniform_real_distribution<double> dist(1, 1000);
		        return dist(mt);
		    });

	        std::cout << "ARREGLO DESORDENADO" << std::endl;
	        for (int numero: numeros)
	        {
		        std::cout << " | " << numero  ;
	        }
            std::cout << " " << std::endl;
    
            numeros.heapSort();
            std::cout << std::endl ;
            std::cout << "ARREGLO ORDENADO" << std::endl;
	        numeros.recorrer([](int valor)
		    {
                if( valor == 0 ){
                    return;
                } else {
			    std::cout << " | " << valor  ;
                }
		    });

            std::cout << " " << std:: endl ;
        }
            _getch();break;//fin del case principal
        
        case 6:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      METODO DE SELECCION      " << endl;
            Vector<int> numeros;
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
            numeros.rellenar(p, []() {
		    std::random_device rd;
		    std::mt19937 mt(rd());
		    std::uniform_real_distribution<double> dist(1, 1000);
		        return dist(mt);
		    });

	        std::cout << "ARREGLO DESORDENADO" << std::endl;
	        for (int numero: numeros)
	        {
		        std::cout << " | " << numero  ;
	        }
            std::cout << " " << std::endl;
            
            numeros.ordenarArregloPorSeleccion();
            std::cout << std::endl ;
            std::cout << "ARREGLO ORDENADO" << std::endl;
            numeros.recorrer([](int valor)
		    {
                if( valor == 0 ){
                    return;
                } else {
			    std::cout << " | " << valor  ;
                }
		    });

            std::cout << " " << std:: endl ;
        }
            _getch();break;//fin del case principal
        
        case 7:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      RADIX SORT      " << endl;
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
            Vector<int> numeros;
	        numeros.rellenar(p, []() {
		    std::random_device rd;
		    std::mt19937 mt(rd());
		    std::uniform_real_distribution<double> dist(1, 1000);
		    return dist(mt);
		    });

	        std::cout << "ARREGLO DESORDENADO" << std::endl;
	        for (int numero: numeros)
	        {
		        std::cout << " | " << numero  ;
	        }
            std::cout << " " << std::endl;

            numeros.radix([](int* a , int b){
            int max = *(a+0);
            for (int i = 1; i < b; i++){
            if (*(a+i) > max){
            max = *(a+i);
            }
            }
                return max;
	        });
            std::cout << std::endl ;
            std::cout << "ARREGLO ORDENADO" << std::endl;
            numeros.recorrer([](int valor)
		    {
                if( valor == 0 ){
                    return;
                } else {
			    std::cout << " | " << valor  ;
                }
		    });

            std::cout << " " << std:: endl ;
        }
            _getch();break;//fin del case principaL
        
        case 8:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      BURBUJA      " << endl;
            Burbuja<int> qr = Burbuja<int>();
            Vector<int> vec;
            int p = 0 ;
            do{
	            p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	            std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
            vec = Vector<int>(p);
            vec.generar(p);
            std::cout << "Vector generado ->" << std::endl;
            vec.imprimir();
            qr.ordenar(vec.getVector(), 0, p - 1);
            std::cout << std::endl ;
            std::cout << std::endl << "Vector ordenado por Burbuja ->" << std::endl;
            vec.imprimir();
                delete[] vec.getVector();
            }
            _getch();break;//fin del case principal
        
        case 9:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      SELL SORT      " << endl;
            Vector<int> vec;
            Sellshort<int> qr2 = Sellshort<int>();
            std::cout << "Ingrese el numero de elementos a generar  ->";
            int p = 0 ;
            do{
	            p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	            std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
            vec = Vector<int>(p);
            vec.generar(p);
            std::cout << "Vector generado ->" << std::endl;
            vec.imprimir();
            qr2.ordenar(vec.getVector(), 0, p - 1);
            std::cout << std::endl ;
            std::cout << std::endl << "Vector ordenado por Sellshort ->" << std::endl;
            vec.imprimir();
                delete[] vec.getVector();
        }
            _getch();break;//fin del case principal
        
        case 10:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      DIRECTO      " << endl;
            Vector<int> numeros;
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
            numeros.rellenar(p, []() {
		    std::random_device rd;
		    std::mt19937 mt(rd());
		    std::uniform_real_distribution<double> dist(1, 1000);
		        return dist(mt);
		    });

	        std::cout << "ARREGLO DESORDENADO" << std::endl;
	        for (int numero: numeros)
	        {
		        std::cout << " | " << numero  ;
	        }
            std::cout << " " << std::endl;
    
            numeros.directSort();
            std::cout << std::endl ;
            std::cout << "ARREGLO ORDENADO" << std::endl;
            numeros.recorrer([](int valor)
		    {
                if( valor == 0 ){
                    return;
                } else {
			    std::cout << " | " << valor  ;
                }
		    });

            std::cout << " " << std:: endl ;
        }
            _getch();break;//fin del case principal
        
        case 11:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      METODO NATURAL      " << endl;
            FILE *fichero;
            NaturalSort n;
            fichero = fopen("C:\\Users\\Jorge\\Desktop\\C C++\\Ordenamientos Lamda\\mezcla.txt", "r+");
            puts("Fichero desordenado\n");
            n.mostrar(fichero);
            puts("Ordenando fichero\n");
            n.mezcla(fichero);
            std::cout << std::endl ;
            puts("Fichero ordenado\n");
            n.mostrar(fichero);
            fclose(fichero);
            system("PAUSE");
        }
            _getch();break;//fin del case principal
        
        case 12:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      INTERCALACION      " << endl;
         	char* nomFic = (char*)malloc(7 * sizeof(int));
	        char* nomFic1 = (char*)malloc(7 * sizeof(int));
	        Intercalacion in;
	        in.limpiar();
	        Vector<int> numeros;
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
	        numeros.rellenar(p, []() {
		    std::random_device rd;
		    std::mt19937 mt(rd());
		    std::uniform_real_distribution<double> dist(1, 1000);
		    return dist(mt);
		    });
	        std::cout << "ARREGLO DESORDENADO" << std::endl;
	        for (int numero: numeros)
	        {
		        std::cout << " | " << numero  ;
	        }
            std::cout << " " << std::endl;

	        nomFic = (char*)"F1.txt";
	        nomFic1 = (char*)"F2.txt";	
	        in.insertar(numeros, nomFic,p);
	        in.ordenar();	
            std::cout << std::endl ;
            std::cout << "ARREGLO ORDENADO" << std::endl;
	        numeros.recorrer([](int valor)
		    {
                if( valor == 0 ){
                    return;
                } else {
			    std::cout << " | " << valor  ;
                }
		    });

            std::cout << " " << std:: endl ;
            }
            _getch();break;//fin del case principal
        
        case 13:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      DISTRIBUCION      " << endl;
            CountSort<int>cr1 = CountSort<int>();
            Vector <int> vec;
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
            vec = Vector<int>(p);
            vec.generar(p);
            std::cout << "Vector desordenado ->" << std::endl;
            vec.imprimir();
            cr1.countSort(vec.getVector(), p);
            std::cout << std::endl ;
            std::cout << std::endl << "Vector ordenado por distribución->" << std::endl;
            cr1.imprimir(vec.getVector(), p);
        }
            _getch();break;//fin del case principal
        
        case 14:{
            system("CLS");
            cout << "\n" << endl;
            cout << "      PEINE      " << endl;
            Vector<int> vec;
            Peine<int> qr1 = Peine<int>();
            int p = 0 ;
            do{
	            p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	            std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
            vec = Vector<int>(p);
            vec.generar(p);
            std::cout << "Vector generado ->" << std::endl;
            vec.imprimir();
            qr1.ordenar(vec.getVector(), 0, p - 1);
            std::cout << std::endl ;
            std::cout << std::endl << "Vector ordenado por el metodo del Peine ->" << std::endl;
            vec.imprimir();
                delete[] vec.getVector();
        }
            _getch();break;//fin del case principal
        
        case 15:
        {
            system("CLS");
            cout << "\n" << endl;
            cout << "      GNOMO      " << endl;
            Vector<int> numeros;
            int p = 0 ;
            do{
	        p = onlyIntControl( "Ingrese la dimension del arreglo (mayores de 2 y menores a 200)" );
	        std::cout << std::endl ;
            }while( p <= 2 || p >= 201);
	        numeros.rellenar(p, []() {
		    std::random_device rd;
		    std::mt19937 mt(rd());
		    std::uniform_real_distribution<double> dist(1, 1000);
		    return dist(mt);
		    });
	        std::cout << "ARREGLO DESORDENADO" << std::endl;
	        for (int numero: numeros)
	        {
		        std::cout << " | " << numero ;
	        }
            std::cout << " " << std::endl;

            numeros.ordenamientoGnome(p);
            std::cout << std::endl ;
	        std::cout << "ARREGLO ORDENADO" << std::endl;
	        numeros.recorrer([](int valor)
		    {
                if( valor == 0 ){
                    return;
                } else {
			    std::cout << " | " << valor  ;
                }
		    });

            std::cout << " " << std:: endl ;
        }

            _getch();break;//fin del case principaL
        
        case 16:
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

int Control::onlyIntControl(const char* msj)
{
    char* datos = new char [10];

    int i = 0;
    int a = 0;
    char c;
    printf("%s", msj);
    std::cout << endl;
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            std::cout << c ;
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