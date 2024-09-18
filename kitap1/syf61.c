//
// Created by myagi on 18.09.2024.
//
#include <stdio.h>
#include <conio.h>
int main(){
  int x, y, sonuc;
  float bolme;
  char islem;
  printf("Enter the first number: ");
  scanf("%d", &x);
  printf("Enter the second number: ");
  scanf("%d", &y);
  printf("islem operatoru giriniz(+ - * /): ");
  islem = getch();
  switch (islem){
    case '+':
      sonuc = x += y;
      printf("Sonuc: %d\n", sonuc);
      break;
    case '-':
      sonuc = x -= y;
      printf("Sonuc: %d\n", sonuc);
      break;
    case '*':
      sonuc = x *= y;
      printf("Sonuc: %d\n", sonuc);
      break;
    case '/':
      bolme = (x*1.0)/y;
      printf("Sonuc: %f\n", bolme);
      break;
    default:
      break;
  }

  return 0;
  }