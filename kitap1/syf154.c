//
// Created by myagi on 25.09.2024.
//

#include <stdio.h>
#include <conio.h>
// esc girilene kadar girilen karakterleri ve onların sayısal karşılıklarını gösteren program.

int main() {
	char karakter;
	int sayi;
	do {
		karakter = getche(); // Sondaki karakteri silmek gerek!
		sayi = (int)karakter;
		printf("\n%c = %d\n", karakter, sayi);
	} while (karakter != 27);
  return 0;
  }