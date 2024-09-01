//
// Created by Mechres on 1.09.2024.
//

#include <stdio.h>

// Basit Hesap Makinesi

int main() {

    char operator;
    double num1;
    double num2;
    double result;

    printf("Please enter an operator (+ - / *): ");
    scanf("%c", &operator);
    printf("Enter number 1: ");
    scanf("%lf", &num1);
    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("The result is %.1lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result is %.1lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The result is %.1lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("The result is %.2lf", result);
            break;
        default:
            printf("%c Is an invalid operator\n", operator);
    }
    return 0;
}