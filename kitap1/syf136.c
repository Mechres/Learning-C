//
// Created by myagi on 24.09.2024.
//
#include <stdio.h>
#include <math.h>
#define BOYUT 2

// İki boyutlu uzayda iki vektör arasındaki açı, kosinüs teoremi ile hesaplanır. Burada A VE B birer vektör
// A ve B vektörlerinin uzunlukları ve iki vektör arasındaki açıdır. bileşenleri girilen iki vektör arasındaki
// açıyı vektorAci isimli bir fonksiyon yardımıyla hesaplayan ve sonuçları yazdıran program yazınız.


float cos_teorem(float[], float[]);
float skaler_carpim(float[], float[]);
float vektor_uz(float x[], float y[]);
float x[BOYUT], y[BOYUT];
int i;

int main() {
  float sonuc;
  const float PI = 3.14159265358979323846;
  printf("Vektor bilesenlerini giriniz : ");
  for (i = 0; i < BOYUT; i++) {
    printf("\n%d. Vektorun X[%d] ve Y[%d]\n", i+1, i, i);
    scanf("%f%f", &x[i], &y[i]);
  }
  sonuc = cos_teorem(x, y);
  printf("Iki vektor arasindaki aci = %.2f derecedir.", acos(sonuc)*180./PI);
  return 0;
  }


float cos_teorem(float x[], float y[]) {
  return skaler_carpim(x, y) / vektor_uz(x, y);
}

float skaler_carpim(float x[], float y[]) {
  return x[0] * x[1] + y[0] * y[1];
}
float vektor_uz(float x[], float y[]) {
  float boy=1;
  for (i=0; i<BOYUT; i++){
    boy*=sqrt(pow(x[i],2)+pow(y[i],2));
  }
  return boy;
}