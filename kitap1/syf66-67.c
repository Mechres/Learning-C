//
// Created by myagi on 18.09.2024.
//
#include <stdio.h>
#include <math.h>

int main() {
  float kutle, boy, indeks;
  printf("Agirlinigizi kg cinsinden giriniz:  ");
  scanf("%f", &kutle);
  printf("boyunuzu metre cinsinden giriniz:  ");
  scanf("%f", &boy);
  indeks = kutle / pow(boy, 2);
  printf("INDEKS DEGERI: %f\n", indeks);

  if (indeks <= 19.9) {
    printf("ZAYIFSIN!");
  }
  else if (indeks > 19.9 && indeks <= 24.9) {
    printf("Normalsin!");
  }
  else if (indeks > 24.9 && indeks <= 29.9) {
    printf("Hafif Sismansin!");
  }
  else if (indeks > 29.9 && indeks <= 34.9) {
    printf("Sismansin!\n");
  }
  else if (indeks > 34.9 && indeks <= 44.9) {
    printf("Saglik acisindan SORUNLU OLAN Bir insansın!");
  }
  else if (indeks > 44.9 && indeks <= 49.9) {
    printf("Asiri SISMANSIN!");
  }
  else{
    printf("OLUMCUL SISMANSIN!\n");
    }
  return 0;
  }