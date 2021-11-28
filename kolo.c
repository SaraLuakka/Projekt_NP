#include <stdio.h>
#include <math.h>

int main()
{
    float r, pole;

    printf("Podaj promien kola: ");
    scanf("%f", &r);
    pole = M_PI * pow(r,2);
    printf("Pole kola o promieniu %.3f jest rowne %.3f", r, pole);

    getchar();
    getchar();

    return 0;
}
