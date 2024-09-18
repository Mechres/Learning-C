//
// Created by myagi on 18.09.2024.
//
#include <stdio.h>
// Toplam=1+2+...+100 işleminin sonucunu veren programı yazın.
int main(){
  int sayi, toplam=0;
  for(sayi=1;sayi<=100;sayi++){
    toplam=toplam+sayi;
  }
  printf("toplam=%d\n",toplam);
  return 0;
  }