#include <stdio.h>

// do while loop
// Once do blok kodu çalışturır, SONRA while'daki argümanı kontrol eder.
int main() {
    int number = 0;
    int sum = 0;

    do{
        printf("Enter a number above zero: ");
        scanf("%d", &number);
        if(number > 0) {
            sum = sum + number;
        }
    }while (number > 0);

    printf("Sum: %d", sum);

    return 0;
}