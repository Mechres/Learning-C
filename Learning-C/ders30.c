#include <stdio.h>
#include <string.h>

// structs

struct Player {
    char name[20];
    int score;

};

int main() {

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Mechres");
    player1.score = 6;

    strcpy(player2.name, "Mecha");
    player2.score = 8;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);
    return 0;
}