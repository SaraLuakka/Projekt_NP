#include "kwadrat.h"	//
#include <stdio.h>	//
#include <math.h>

void oblicz_kwadrat() {
    float a, wynik;
    printf("Podaj dlugosc boku kwadratu (a):\n"); // podaj dł boku od użykowanika
    scanf("%f", &a); // pobranie i przypisanie do zmiennej wartości
    wynik = pow(a,2); // obliczenie pola ze wzoru
    printf("Pole kwadratu jest rowne: %.3f", wynik); // wyświtlenie wynkiu
}
