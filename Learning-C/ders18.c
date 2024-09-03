#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Mechres";
    char string2[] = "Mecha";

    //strlwr(string1);                      // stringi küçük harfe çeviriyor
    //strupr(string1);                      // stringi büyük harfe çeviriyor
    //strcat(string1, string2);             // string2'yi string1'in sonuna ekliyor
    //strncat(string1, string2, 1);         // string2'den n kadar karakteri string1'e ekliyor
    //strcpy(string1, string2);             // string2'yi string1'e kopyalıyor
    //strncpy(string1, string2, 4);         // string2'den n kadar karakteri string1'e kopyalıyor.

    //strset(string1, '?');                 // stringdeki tüm karakterleri verilen karaktere dönüştürüyor.
    //strnset(string1, 'x', 1);             // n karakter kadarını verilen karaktere dönüşyürüyor
    //strrev(string1);                      // stringi tersine çeviriyor.

    //int result = strlen(string1);                // string'in uzunluğunu verir.
    //int result = strcmp(string1, string2);        // string'in tüm karakterlerini karşılaştırır. Aynıysa 0 değilse 1 döndürür.
    //int result = strncmp(string1, string2, 1);    // n kadar karakter karşılaştır. Aynıysa 0 değilse 1 döndürür.
    //int result = strcmpi(string1, string1);       // tüm stringi karşılaştır (Büyük küçük harf duyarlı değil.)
    int result = strnicmp(string1, string1, 1);   // n kadar karakter karşılaştır (Büyük küçük harf duyarlı değil)

    printf("%s\n", string1);
    printf("%d\n", result);
    return 0;
}