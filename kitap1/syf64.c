//
// Created by myagi on 18.09.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
  int a,b,c;
  printf("Ucgenin kenarlarini giriniz: ");
  scanf("%d%d%d",&a,&b,&c);
  if ((a>abs(b-c) && (b>abs(a-c)) && (c > abs(a-b)) && (a < (b+c)) && (b < (a+c)) && (c < (a + b)))) {
          printf("Bu degerler bir ucgen olusturabilir.");
        }
  else
      printf("Bu degerler bir ucgen olusturmaz.");
  return 0;
  }