

#include <stdio.h>
int main() {
    int boshlanish_soat, boshlanish_daqiqa;
    int tugash_soat, tugash_daqiqa;
    int boshlanish, tugash, farq;

    printf("Boshlanish soatini kiriting: ");
    scanf("%d", &boshlanish_soat);

    printf("Boshlanish daqiqasini kiriting: ");
    scanf("%d", &boshlanish_daqiqa);

    printf("Tugash soatini kiriting: ");
    scanf("%d", &tugash_soat);

    printf("Tugash daqiqasini kiriting: ");
    scanf("%d", &tugash_daqiqa);

    boshlanish = boshlanish_soat * 60 + boshlanish_daqiqa;
    tugash = tugash_soat * 60 + tugash_daqiqa;

    farq = tugash - boshlanish;

    printf("Vaqt farqi: %d daqiqa\n", farq);

    return 0;
}