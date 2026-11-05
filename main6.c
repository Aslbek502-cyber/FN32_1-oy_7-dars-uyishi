

#include <stdio.h>

int main() {
    int son, a, b, kopaytma;
    printf("Ikki xonali son kiriting:");
    scanf("%d", &son);
    a=son/10;
    b=son%10;
    kopaytma=a*b;
    printf("Birinchi raqam: %d\n", a);
    printf("Ikkinchi raqam: %d\n", b);
    printf("Raqamlar kopaytmasi: %d\n", kopaytma);
    

    
    return 0;
}