#include <stdio.h>

// Switch case

int main() {
    char grade;
    printf("Enter a letter grade:");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("Perfect!");
            break;
        case 'B':
            printf("You did good!");
            break;
        case 'C':
            printf("You did okay!");
            break;
        case 'D':
            printf("At least it's not an F!");
            break;
        case 'F':
            printf("YOU HAVE FAILED!");
            break;
        default:
            printf("Wrong input!");
    }

    return 0;
}