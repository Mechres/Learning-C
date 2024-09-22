//
// Created by myagi on 22.09.2024.
//
#include <stdio.h>
// A ve B gibi 3x3  boyutlu iki matrisi çarpıp sonucunu C gibi bir matrise aktaran bir program yazınız.
int main() {
  int i, j, k;
  int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int B[3][3] = {{9,8, 7}, {6,5, 4}, {3, 2, 1}};
  int C[3][3];

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      C[i][j] = 0;
      for (k = 0; k < 3; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }

    }
  }
  printf("\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%5d ", C[i][j]);
    }
    printf("\n");
  }
  return 0;
  }