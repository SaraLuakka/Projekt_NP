#include <stdio.h>
#include "kwadrat.h"
#include "prostokat.h"
#include "trojkat.h"
#include "kolo.h"

int main() {
    char figura;

    printf("Podaj nazwe figury (k-kwadrat, p-prostokat, t-trojkat, x-kolo).\nWystarczy pierwsza litera nazwy figury:\n");
    scanf("%c", &figura);

    switch (figura) { //instrukacja switch do wyboru wzoru pola wzg. figury
        case 'k':
            oblicz_kwadrat(); // Sara
            break;
        case 'p':
            oblicz_prostokat(); // Marcin
            break;
        case 't':
            oblicz_trojkat(); // Kuba
            break;
        case 'x':
            oblicz_kolo(); // Wioletta
            break;
        default:
            printf("Podano bledny skrot figury.\n");

    }


    return 8;

}
