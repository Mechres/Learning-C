//
// Created by myagi on 25.09.2024.
//

#include <stdio.h>
#include <string.h>
// Bir metni bir diğer dizgi değişkenine kopyalayan program.

int main() {
  char str[] = "Mehmet";
  char str2[] = "Yagiz";
  printf("str1 = %s\n", str);
  printf("str2 = %s\n", str2);
  printf("str1 str2'ye kopyalaniyor.");
  strcpy(str2, str);
  printf("\nstr2 = %s\n", str2);

  return 0;
  }