//
// Created by myagi on 25.09.2024.
//

#include <stdio.h>
#include <string.h>
// girilen iki metni birbiriyle karşılaştırıp hangi metinin uzunluk
// olarak daha önce gelmesi gerektiğini ifade eden program
int main() {
	char metin1[20], metin2[20];
    printf("Ilk metini giriniz: ");
    gets(metin1);
    printf("Ikinci metini giriniz: ");
    gets(metin2);
	if (strcmp(metin1, metin2) < 0) {
          printf("Ikinci metin ilk sirada yer alir.\n");
	}
    else
          printf("Birinci metin ilk sirada yer alir.");
	return 0;
   }