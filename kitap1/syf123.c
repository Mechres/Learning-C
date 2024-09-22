//
// Created by myagi on 22.09.2024.
//
#include <stdio.h>

const int boyut=5;
int GlobalDizi[5]; // Global Dizi

int main() {
    static int DuraganDizi[5]; // Durağan Dizi
    for(int i=0; i<boyut; i++)
      printf("%d\n", GlobalDizi[i]);
    for(int i=0; i<boyut; i++)
        printf("%d\n", DuraganDizi[i]);
    return 0;
  }