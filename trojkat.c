#include <stdio.h>
#include <math.h>

void oblicz_trojkat() {
    int i = 0;
    float a, b, c, P, p;

    printf("Trojkat: Podaj boki\n ");
    scanf("%f\n%f\n%f", &a, &b, &c);
    if (a >= b) {
        if (a >= c) {
            if (a < b + c) {
                p = (a + b + c) / 2;
                P = sqrt(p * (p - a) * (p - b) * (p - c));
                printf("Pole Tego Trojkata: %.3f", P);
            } else {
                printf("nie ma takiego trojkata");
            }
        }else{
                if (c < b + a) {
                    p = (a + b + c) / 2;
                    P = sqrt(p * (p - a) * (p - b) * (p - c));
                    printf("Pole Tego Trojkata: %.3f", P);
                } else {
                    printf( "nie ma takiego trojkata");
                }}
        }else{
                    if (b >= c) {
                        if (b < c + a) {
                            p = (a + b + c) / 2;
                            P = sqrt(p * (p - a) * (p - b) * (p - c));
                            printf("Pole Tego Trojkata: %.3f", P);
                        } else {
                            printf("nie ma takiego trojkata");
                        }

                    }

                }
    getchar();
    } 
