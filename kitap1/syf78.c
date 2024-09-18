//
// Created by myagi on 18.09.2024.
//
#include <stdio.h>
#include <math.h>
//Girilen sayının asal sayı olup olmadığını kontrol eden programı yazın.
int main() {
    int n, i, c=0;
    printf("Sayi girin: ");
    scanf("%d", &n);
    for(i=2; i<n; i++)
        if(n%i==0) c++;
    if (c==0)
        printf("Sayi ASAL sayidir.");
    else
        printf("Sayi ASAL sayi DEGILDIR.");

  return 0;
  }