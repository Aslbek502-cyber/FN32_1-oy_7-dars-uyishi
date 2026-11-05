#include<stdio.h>
int main(void){
    float km, a, b;
    a = 1000;
    b = 100000;

    printf("km kiriting:");
    scanf("%f", &km);

    float metr = km * a;
    printf("%f * %f = %f\n", km, a, metr);

    float santimetr = km * b;
    printf("%f * %f = %f", km, b, santimetr);
    // float km * 100000;
    // scanf("%f" &km);

    return 0;

}
        