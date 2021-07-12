#include "Validatedll.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

JNIEXPORT jint JNICALL Java_Validatedll_suma
  (JNIEnv *, jobject, jint a , jint b){
  	return a + b ;
  }

/*
 * Class:     Validatedll
 * Method:    resta
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_Validatedll_resta
  (JNIEnv *, jobject, jint a , jint b){
  	return a - b ;
  }

/*
 * Class:     Validatedll
 * Method:    multiplicacion
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_Validatedll_multiplicacion
  (JNIEnv *, jobject, jint a, jint b){
  	return a * b ;
  }

/*
 * Class:     Validatedll
 * Method:    division
 * Signature: (II)D
 */
JNIEXPORT jdouble JNICALL Java_Validatedll_division
  (JNIEnv *, jobject, jint a, jint b){
  	float g = 0 ;
  	float e = 0;
  	float f = 0 ;
  	
  	if(b == 0){
  		cout << "No se puede dividir !!" << endl ;
	  } else {
	  	e = float(a);
	  	f = float(b);
	  	cout << e << endl ;
	  	cout << f << endl ;
	  	g = e/ f ;
	  	cout << g << endl ;
	  	return g ;
	  }
  }

/*
 * Class:     Validatedll
 * Method:    validate_L
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Validatedll_validate_1L
  (JNIEnv *, jobject){
  	
  	char* datos = new char[10];
  	int dat = 0 ;
    int i = 0;
    char c;
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            printf("%c", c);
            *(datos+i) = c;
            i++;
        }
    }
    
    dat = atoi (datos);
    return dat;
  }
