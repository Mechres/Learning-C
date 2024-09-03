#include <stdio.h>

    // continue = sonraki kodu atlayarak, zorla sonraki loopa geçiyor
    // break = loop/switch'den çıkıyor.

int main() {

    for(int i = 1; i <= 20; i++) {
      if(i == 13) {
          //continue;
          break;
      }
      printf("%d\n", i);
    }


    return 0;
}