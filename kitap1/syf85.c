//
// Created by myagi on 20.09.2024.
//

#include <stdio.h>
// Bölenlerin toplamı kendisini veren sayıya mükemmel sayı denir.
// klavyeden girilen bir sayının mükemmel sayı olup olmadığını bilen program.
int main() {
  int sayi, sayac, toplam=0;
  printf("Sayi girin: ");
  scanf("%d", &sayi);
  for(sayac=1; sayac<sayi; sayac++){
   if(sayi%sayac==0){    //sayac sayi degerini tam bölüyorsa toplama eklenir.
       toplam=toplam+sayac;
   }
   }
  if(toplam==sayi){
     printf("%d sayisi MUKEMMEL sayidir!\n", sayi);
   }
  else{
     printf("%d sayisi mukemmel sayi degildir", sayi);
   }


  return 0;
  }