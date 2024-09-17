//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main(void) {
    float r, cevre, alan;
    printf("Dairenin yaricapini girin:  ");
    scanf("%f", &r);
    cevre = 2 * PI * r;
    alan = PI * pow(r, 2);
    printf("\nDairenin cevresi = %f\n\n Dairenin alanı = %f", cevre, alan);

    return 0;

}