//
// Created by myagi on 22.09.2024.
//

/*
    Fonksiyonlar Ornek baslangici!
 */

// İki farklı fonksiyon yardımıyla ekranda "Merhaba Arkadas" ve "Merhaba Yagiz" yazdiranm programi kodlayınız
// (Fonksiyonlardan birincisi parametresiz ve ikincisi parametreli kullanıma örnek olacak biçimde)

#include <stdio.h>
#include <string.h>

void merhabaArkadas();
void merhabaIsim(char*);

int main() {
  char isim[25] = "Yagiz";
  merhabaArkadas();
  merhabaIsim(isim);

  return 0;
 }

void merhabaIsim(char* isim) {
   printf("Merhaba %s\n", isim);
 }

void merhabaArkadas() {
   printf("Merhaba Arkadas!\n");
 }