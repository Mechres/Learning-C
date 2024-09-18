//
// Created by myagi on 18.09.2024.
//

#include <stdio.h>
#include <conio.h>

int main() {
    int x,y;
    printf("Bir x değeri giriniz : ");
    scanf("%d",&x);
    if(x>0)
        y=x*x;
    else
        y=2*x;
    printf("islem sonucu: %d", y);
    getch();
    return 0;
  }