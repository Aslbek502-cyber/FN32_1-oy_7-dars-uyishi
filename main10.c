

#include <stdio.h>

int main() {
  float daromad, xarajat, tejash, jamgarma;

    printf("Oylik daromadni kiriting: ");
    scanf("%f", &daromad);

    printf("Oylik xarajatni kiriting: ");
    scanf("%f", &xarajat);

    tejash = daromad - xarajat;
    jamgarma = tejash * 12;

    printf("Bir oyda tejaydigan pul: %.2f so'm\n", tejash);
    printf("12 oyda jamgaradigan pul: %.2f so'm\n", jamgarma);
    return 0;
}