#include <stdio.h>
#include <stdbool.h>

// logical operators ! NOT

int main(){
    bool sunny = false;

    if (!sunny) {
      printf("It's cloudy outside!");
    }
    else {
       printf("It's sunny outside!");
    }
    return 0;
}