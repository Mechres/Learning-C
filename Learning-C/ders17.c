#include <stdio.h>


// function prototype
// main()den once body olmadan fonksiyon tanimlama
// cogu C compiler parametre eslestirmeye dikkat etmiyor
// eksik arguman beklenmedik davranislara yol aciyor.

void hello(char[], int); // function prototype


int main() {
    char name[] = "Mechres";
    int age = 26;
    hello(name, age);
  return 0;
  }

void hello(char name[], int age) {
    printf("\nHello %s", name);
    printf("\nYou are %d age years old!", age);
}
