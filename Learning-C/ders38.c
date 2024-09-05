#include <stdio.h>

//Memory

int main() {
    char a;
    int b[10];
    //double c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    //printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    //printf("%p\n", &c);
    return 0;
}