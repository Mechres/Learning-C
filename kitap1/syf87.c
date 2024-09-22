//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
// sıfır değeri girilene kadar değer alan, sıfır değeri girildiğinde o ana kadar
// kaç adet pozitif kaç adet negatif değer girildiğini gösteren program
int main() {
    int sayi, pozitif, negatif;
    printf("Programi durdurmak icin 0 yazin\n");
    while (sayi != 0) {
        printf("Sayi girin: ");
        scanf("%d", &sayi);
        if (sayi < 0) {
            negatif++;
        }
        else if (sayi > 0) {
            pozitif++;
        }
        else if (sayi == 0) {
            break;
        }
    }
    printf("Girilen Pozitif sayi sayisi: %d,\nGirilen Negatif sayi sayisi: %d", pozitif, negatif);
}