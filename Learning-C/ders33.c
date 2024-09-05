#include <stdio.h>

// Enums

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu =5, Fri =6, Sat = 7};

int main() {

    enum Day today = Sun;

    printf("Today is %d\n", today); // Enum'lar string değildir, ama int olarak kullanılabilir!

    if (today == Sun || today == Sat) {
      printf("It's the weekend!");
    }
    else{
      printf("It's Workday!");
      }

  return 0;
  }