#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main() {
    char isim[20];
    printf("Adınız:");
    scanf("%s", isim);
    printf("Merhaba %s!", isim);
    getch();
}