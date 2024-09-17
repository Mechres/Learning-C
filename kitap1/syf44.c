//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>
int main() {
    float fahrenheit, celcius;
    printf("Fahrenheit Degeri: ");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) / 1.8;
    printf("%.2f Fahrenheit Celcius karsiligi %.2f\n", fahrenheit, celcius);
    return 0;
}