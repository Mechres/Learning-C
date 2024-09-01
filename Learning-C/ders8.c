#include <stdio.h>
#include <ctype.h>


// Celsius - Fahrenheit Dönüşümü

int main() {

    char unit;
    float temp;

    printf("\n Is the temperature in (C) or (F)?: ");
    scanf("%c", &unit);
    // toupper() harf büyütme
    unit = toupper(unit);

    if (unit == 'C') {
        printf("\n Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\n The temp in Fahrenheit is: %.1f", temp);
    }

    else if (unit == 'F') {
        printf("\n Enter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\n The temp in Celsius is: %.1f", temp);
    }
    else {
    printf("\n %c is not a valid unit of measurement", unit);
    }
    return 0;
}