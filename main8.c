

#include <stdio.h>

int main() {
int kun, yil, hafta, qoldiq;

    printf("Kunlar sonini kiriting: ");
    scanf("%d", &kun);

    yil = kun / 365;
    qoldiq = kun % 365;

    hafta = qoldiq / 7;
    qoldiq = qoldiq % 7;

    printf("Yil: %d\n", yil);
    printf("Hafta: %d\n", hafta);
    printf("Qolgan kun: %d\n", qoldiq);
   
    return 0;
}