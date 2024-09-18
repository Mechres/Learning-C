//
// Created by myagi on 18.09.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int OgrNot;
    printf("Notunuzu girin: ");
    scanf("%d", &OgrNot);
    if (OgrNot >= 0 && OgrNot <= 49)
      printf("Harf Karsiligi -->>  F");
    else if (OgrNot >= 50 && OgrNot <= 59)
      printf("Harf Karsiligi -->>  E");
    else if (OgrNot >= 60 && OgrNot <= 69)
      printf("Harf Karsiligi -->>  D");
    else if (OgrNot >= 70 && OgrNot <= 79)
      printf("Harf Karsiligi -->>  C");
    else if (OgrNot >= 80 && OgrNot <= 89)
      printf("Harf Karsiligi -->>  B");
    else if (OgrNot >= 90 && OgrNot <= 100)
      printf("Harf Karsiligi -->>  A");
    else
      printf("HATALI NOT GIRISI!");
    return 0;
  }