#include <stdio.h>

// loop ile array yazdırma.

int main() {
  double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30.0, 35.0, 40.0};

  //printf("%d bytes", sizeof(prices));
  //printf("%.2lf\n", prices[0]);
    /*
  for (int i = 0; i < 5; i++) {
      printf("%.2lf\n", prices[i]);
  }
    */

  for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
    printf("%.2lf\n", prices[i]);
  }

  return 0;
  }