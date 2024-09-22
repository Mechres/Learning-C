//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
void Goster(int [5]);
// Dizi elemanlarını fonksiyona gönderme.
int main(){
  int diziA[5] = {55, 414, 7, 210, 77};
  Goster(diziA);

  return 0;
  }





void Goster(int MyDizi[5]){
    int i;
    for(i=0;i<5;i++){
      printf("%d\n", MyDizi[i]);
    }
  }