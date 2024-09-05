#include <stdio.h>
#include <stdlib.h>

// Bitwise Oparatörleri
// & = AND
// | = OR
// ^ = XOR
// << = left shift
// >> = right shift


/* AND
int main(){
    int x = 6;   // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 4 =  00000100

    z = x & y;
    printf("AND = %d\n", z);
  return 0;
  }

 */

/* OR
int main(){
    int x = 6;   // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 14 = 00001110

    z = x | y;
    printf("OR = %d\n", z);
    return 0;
}


 */

/* XOR
int main(){
    int x = 6;   // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 10 =  00001010

    z = x ^ y;
    printf("XOR = %d\n", z);
    return 0;
}



 */



int main(){
    int x = 6;   // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 1 =  00000001

    z = x << 2;
    printf("Left shift = %d\n", z);

    z = x >> 2;
    printf("Right shift = %d\n", z);
    return 0;
}
