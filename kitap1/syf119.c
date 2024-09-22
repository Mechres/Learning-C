//
// Created by myagi on 22.09.2024.
//


#include <stdio.h>
#include <math.h>

// Seri açılımı yardımıyla exp(x)=1+x+x^2/2!+x^3/3+ ... + x^n/n! değerini hesap eden program.
int faktoriyel(int n);

int main(){
  float toplam = 1.0;
  int x, i=1, n;
  printf("exp(x)=1+x+x^2/2!+x^3/3+ ... + x^n/n! serisi icin\n x degerini giriniz : ");
  scanf("%d",&x);
  printf("Serinin n degerini giriniz : ");
  scanf("%d",&n);

  do {
    toplam +=(double) pow(x,i)/faktoriyel(i);
    i++;
  }while(i<n);
  printf("Sonuc = %6.2f\n",toplam);

  return 0;
  }

int faktoriyel(int n){
  int j, f=1;
  for(j=1;j<=n; j++){
    f=f*j;
  }
  return f;
}