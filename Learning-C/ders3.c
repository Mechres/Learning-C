#include <stdio.h>
#include <math.h>


int main(void) {
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);


    printf("\nSquare root: %lf", A);
    printf("\nPower: %lf", B);
    printf("\nRound: %d", C);
    printf("\nRound up: %d", D);
    printf("\nRound down: %d", E);
    printf("\nAbsolute: %lf", F);
    printf("\nLogarithm: %lf", G);
    printf("\nSine: %lf", H);
    printf("\nCosine: %lf", I);
    printf("\nTangent: %lf", J);
    return 0;
}
