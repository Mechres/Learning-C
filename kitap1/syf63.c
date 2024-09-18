//
// Created by myagi on 18.09.2024.
//

#include <stdio.h>
#include <conio.h>

int main() {
  int a, b, c;
  printf("Ucgenin kenarlarini giriniz:  ");
  scanf("%d%d%d", &a, &b, &c);
  if ((a == b) && (b == c))
    printf("Bu bir ESKENAR ucgendir.");
  else if (((a==b) && (a!=c)) || ((b==c) && (b!=a)) || ((a == c) && (a!=b)))
    printf("Bu bir IKIZKENAR ucgendir.");
  else
    printf("Bu bir CESITKENAR ucgendir.");
  return 0;
  }
