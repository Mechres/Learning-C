
#include <stdio.h>

// Writing Files

int main() {

    FILE *pF = fopen("C:\\test.txt", "w");

    fprintf(pF, "\nSpongebob Squarepants\n");

    fclose(pF);

/*
    if(remove("test.txt") == 0) {
        printf("File deleted successfully!");
    }
    else {
        printf("Error deleting file");
    }
    */
    return 0;
}