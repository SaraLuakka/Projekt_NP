#include "prostokat.h"
#include <stdio.h>

float a,b,pole;			//deklaracja zmiennych
void oblicz_prostokat() {
    printf("Podaj dlugosc boku a i b\n"); 	
    printf("a=");		
    scanf("%f", &a);		//wprowadzenie zmiennej a
    printf("b=");
    scanf("%f", &b);		//wprowadzenie zmiennej b
    pole=a*b;			//oblicza pole prostokąta
    printf("Pole prostokata o dl. boku %.2f i %.2f wynosi %.2f", a,b,pole); //wyświetla pole prostokąta o wprowadzonych wymiarach a, b

}