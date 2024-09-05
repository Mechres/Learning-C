#include <stdio.h>
#include <string.h>

// typedef

//typedef char user[25];

typedef struct{
    char name[25];
    char password[12];
    int id;
} User;

int main() {
    //user user1 = "Mechres";

    User user1 = {"Mechres", "password123", 12345};
    User user2 = {"asd", "password133", 21321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    return 0;
}