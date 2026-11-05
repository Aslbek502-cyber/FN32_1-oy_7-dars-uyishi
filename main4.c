#include <stdio.h>

int main() {
    float narx, chegirma;
    float chegirma_summa, yakuniy_narx;

    printf("Mahsulot narxini kiriting: ");
    scanf("%f", &narx);

    printf("Chegirma foizini kiriting: ");
    scanf("%f", &chegirma);

    chegirma_summa = narx * chegirma / 100;
    yakuniy_narx = narx - chegirma_summa;

    printf("Chegirma summasi: %.2f\n", chegirma_summa);
    printf("Yakuniy narx: %.2f\n", yakuniy_narx);

    return 0;
}
