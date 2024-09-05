#include <stdio.h>
#include <ctype.h>
#include <string.h>

// QUIZ Oyunu


int main() {
    char questions[][100] = {"1. What year did the C lang debut?",
                             "2. Who is credited with creating C?",
                             "3. What is the predecessor of C?"};
    char options[][100] = {"A. 1969?", "B. 1972", "C. 1975", "D. 1999",
                            "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                            "A.Objective C", "B. B", "C. C++", "D. C#"};
    char answer[3] = {'B', 'A', 'B'};
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME\n");

    for(int i = 0; i < numberOfQuestions; i++) {
        printf("********************\n");
        printf("%s\n", questions[i]);
        printf("********************\n");
        for(int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", options[j]);
        }
        printf("Guess: ");
        scanf(" %c", &guess); // "%c"den önce boşluk ekleyip sonraki buffer temizleyiciyi silmek sorunu çözdü
        //scanf("%c"); // clear \n from input buffer // Bu sonraki soruya geçmeyi engelliyor!

        guess = toupper(guess);

        if(guess == answer[i]) {
            printf("Correct!\n");
            score++;
        }
        else {
            printf("WRONG!\n");
        }
    }
    printf("********************\n");
    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
    printf("********************\n");
    return 0;
}