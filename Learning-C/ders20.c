#include <stdio.h>
#include <string.h>

// While loop

int main() {

    char name[25] = "";


    printf("\nEnter your name: ");
    fgets(name, 25, stdin); // bosluklarda sorun yasamamak icin fgets
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) {
        printf("You didn't enter your name!");
        printf("\nEnter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';

    }
    printf("\nHello %s\n", name);

}