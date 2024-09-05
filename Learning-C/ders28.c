#include <stdio.h>
#include <string.h>

// iki değişkenin yerini değiştirme

int main(){
  //character
  /*
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);
    */
  // string
    // strcpy'de Y'nin karakter uzunluğu X'den kısa olursa beklenmedik davranışa yol açıyor,
    // bunu uzunlu aynı uzunluğa eşitleyerek çözebiliyoruz.
    char x[15] = "Water";
    char y[15] = "soda";
    char temp[25];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);
  }