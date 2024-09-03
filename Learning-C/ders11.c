#include <stdio.h>
#include <stdbool.h>

// logical operators || OR

int main(){
    float temp = 189;


    if (temp <= 0 || temp >= 30) {
        printf("The weather is bad!");
    }


    else {
        printf("The weather is Good!");
    }
    return 0;
}