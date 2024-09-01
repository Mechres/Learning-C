#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;
    // $%-8.2f\n -8 sola yaslıyor 8 sağa .2 noktandan sonra kaç karakter gösterileceği.
    printf("Item 1: $%-8.2f\n", item1);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%-8.2f\n", item3);

    // Constant değiştirilemez.
    const float PI = 3.14159;
    printf("%f\n", PI);

    int x = 5;
    int y = 2;

    // integer 2 / 5 = 2, böleni ve sonucu float veya double yapmak sorunu çözüyor.
    //  int z = x / y; (SONUCU İKİ ÇÖZÜM İÇİN DE FLOAT YAP)
    float z = x / (float) y;
    printf("%f\n", z);


    int a = x % y;
    printf("%d\n", a);

    // x--; // X -1
    // X + 1
    x++;

    printf("%d\n", x);


    // Augmented assignment operator
    // x = x + 1
    // x+=1

    x = 10;
    //x = x + 2;
    x+=2;
    printf("%d\n", x);

    //x = x - 3;
    x-=3;
    printf("%d\n", x);

    //x = x * 4;
    x *= 4;
    printf("%d\n", x);

    //x = x / 5;
    x /= 5;
    printf("%d\n", x);

    //x = x % 2;
    x %= 2;
    printf("%d\n", x);

    return 0;
}
