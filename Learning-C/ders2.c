#include <stdio.h>
#include <string.h>
int main(void) {
    char name[25]; // bytes
    int age;
    printf("What's your name?");
    //scanf("%s", name); // Boşluklar sorun yaratıyor.
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Your name is %s.\n", name);
    printf("You are %d years old", age);

    return 0;
}