
#include <stdio.h>

int main() {

    float var[7] = {0};
    printf("Enter variable values:");
    for(int i = 0; i < 8; i++) {
        scanf("%f", &var[i]);        
    }

    float exp = ((var[0] - var[1] / var[2] * var[3] + var[4]) * (var[5] + var[6])) ;
    printf("Expression value : %.2f", exp);

    return 0;
}