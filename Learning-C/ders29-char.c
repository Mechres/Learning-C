#include <stdio.h>

// sort an array CHARACTERS

void sort(char array[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(char array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%c ", array[i]);
    }
}
int main() {
    //int array[] = {5, 2, 6, 7, 1, 8, 3, 9, 4, 10};
    char array[] = {'F', 'A', 'C', 'D', 'E', 'B', 'G'};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printArray(array, size);
    return 0;
}