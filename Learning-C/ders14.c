#include <stdio.h>

// arguments

void birthday(char x[], int y){
    printf("\nHappy Birthday dear %s!", x);
    printf("\nYou are %d years old!\n", y);
}

int main() {

  char name[] = "Mechres";
  int age = 26;

  birthday(name, age);
  return 0;
}