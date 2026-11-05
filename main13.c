

#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double kvadrat, kub, yigindi;

    printf("Birinchi sonni kiriting: ");
    scanf("%d", &a);

    printf("Ikkinchi sonni kiriting: ");
    scanf("%d", &b);

    kvadrat = pow(a, 2);
    kub = pow(b, 3);

    yigindi = kvadrat + kub;

    printf("Birinchi sonning kvadrati: %.0f\n", kvadrat);
    printf("Ikkinchi sonning kubi: %.0f\n", kub);
    printf("Natijalar yigindisi: %.0f\n", yigindi);

    return 0;
}