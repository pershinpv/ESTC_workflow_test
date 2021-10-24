#include <stdio.h>
#include "functions.h"

int main()
{
    double a[3] = {1, 2, 3};
    double b[3] = {3, 2, 1};

    printf("\ndot3d   %f\n", dot3d(a, b));

    printf("cross3d ");
    for (int i = 0; i < 3; ++i) printf("%f ", cross3d(a, b)[i]);
    printf("\n");

    printf("sum3d   ");
    for (int i = 0; i < 3; ++i) printf("%f ", sum3d(a, b)[i]);
    printf("\n");

    printf("sub3d   ");
    for (int i = 0; i < 3; ++i) printf("%f ", sub3d(a, b)[i]);
    printf("\n\n");
 
    return 0;
}