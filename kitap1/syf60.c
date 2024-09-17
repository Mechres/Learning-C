//
// Created by myagi on 18.09.2024.
//

//ax^2 + bx + c = 0 ikinci dereceden bir denklemin köklerini bulan programı yazınız.

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float x1, x2, delta;
    printf("a, b, c katsayilarini sirasiyla giriniz: ");
    scanf("%d %d %d", &a, &b, &c);
    delta = b*b - 4*a*c;
    if (delta < 0)
      printf("\n Gercel kokleri yok. Sadece sanal kokleri var.");
    else if (delta > 0){
      x1 = (-b + sqrt(delta)) / (2*a);
      x2 = (-b - sqrt(delta)) / (2*a);
      printf("\n1. Kok: %f\n2. Kok: %f", x1, x2);
      }
    else{
        x1=x2=(-b)/(2*a);
        printf("\n kokler birbirine esittir ve degeri: %f", x1);
    }
  }