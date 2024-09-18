//
// Created by myagi on 18.09.2024.
//

#include <stdio.h>
// n sayısı için 2^n değerini bulan bir program yazın.
int main(){
    int n, us=1, sayac;
    printf("2'nin kacinci ussu alinacak: ");
    scanf("%d",&n);
    for (sayac=1;sayac<=n;sayac++) {
        us=us*2;
    }
    printf("\n 2 ussu %d = %d",n,us);
  return 0;
  }