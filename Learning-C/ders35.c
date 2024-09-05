#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// Numara tahmin

int main() {
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;
    //Şu anki zamanı seed olarak kullan.
    srand(time(0));

    // MIN ve MAX arasında rastgele sayı üret.
    answer = (rand() % MAX) + MIN;

    //printf("%d", answer);

    do {
        printf("Enter a guess:  ");
        scanf("%d", &guess);
        if (guess > answer) {
            printf("Too high!\n");

        }
        else if (guess < answer) {
            printf("Too low!\n");
        }
        else {
            printf("CORRECT!!!\n");
        }
        guesses++;
    }while(guess != answer);
    printf("*******************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("*******************\n");
    Sleep(10000);
    scanf("");

    return 0;
}