#include "prostokat.h"
#include <stdio.h>

float a,b,pole;
void oblicz_prostokat() {
    printf("Podaj dlugosc boku a i b\n");
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    pole=a*b;
    printf("Pole prostokata o dl. boku %.2f i %.2f wynosi %.2f", a,b,pole);

}