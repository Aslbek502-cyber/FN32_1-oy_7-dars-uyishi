

#include <stdio.h>

int main() {
 float km, litr, sarf;

    printf("Masofani kiriting (km): ");
    scanf("%f", &km);

    printf("Sarflangan yoqilgi (litr): ");
    scanf("%f", &litr);

    sarf = (litr / km) * 100;

    printf("100 km uchun yoqilgi sarfi: %.2f litr\n", sarf);
    return 0;
}