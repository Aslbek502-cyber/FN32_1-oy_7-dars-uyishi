
#include <stdio.h>

int main() {
    float a, V, S;

    printf("Kub tomonini kiriting: ");
    scanf("%f", &a);

    V = a * a * a;
    S = 6 * a * a;

    printf("Kub hajmi: %.2f\n", V);
    printf("Tola sirt yuzasi: %.2f\n", S);

    return 0;
}
