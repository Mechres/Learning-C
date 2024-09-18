//
// Created by myagi on 18.09.2024.
//

#include <stdio.h>
// a ve b değerlerine göre a^b değerini hesaplama

int main() {
    int a,b, a_ussu_b=1, sayac;
    printf("a degerini giriniz : ");
    scanf("%d",&a);
    printf("\n");
    printf("b degerini giriniz : ");
    scanf("%d",&b);
    for (sayac=1; sayac<=b; sayac++)
        a_ussu_b=a_ussu_b*a;
    printf("\n%d ussu %d = %d", a, b, a_ussu_b);
    return 0;
}