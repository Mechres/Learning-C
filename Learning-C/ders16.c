#include <stdio.h>


// ternary operator
// (condition) ? value if true : value if false
int findMax(int x, int y) {
    return (x > y) ? x : y;
}


int main() {

    int max = findMax(3, 6);
    printf("%d\n", max);

    return 0;
}