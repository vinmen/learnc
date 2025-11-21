
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {    

    double radius = 0.0;

    printf("Enter radius :");
    scanf("%lf", &radius);
    printf("Area: %.2lf", M_PI * radius * radius);

    return 0;
}