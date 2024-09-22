//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy(short x, short y);
// Çarpım tablosunu ekranda gösteren programı yazınız.

int main() {
  int i,j;
  system("color 7");
  system("cls");
  for(i=1; i<=10; i++)
    {
    for(j=1; j<=10; j++)
      {
      if(i<6){
        gotoxy((i)*12, (i/6)*10+j);
        printf("%d x %2d = %2d\t", i, j, i*j);
      }
      else{
        gotoxy((i-5)*12, (i/6)*12+j);
        printf("%d x %2d = %2d\t", i, j, i*j);
        }

      }
    }


  scanf(" ");
    return 0;
  }

void gotoxy(short x, short y) {
  COORD pos= {x, y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}