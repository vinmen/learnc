#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int max;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if(b >= max) {
        max = b;
    }
    if(c >= max) {
        max = c;
    }
    printf("Max is : %d", max);
    return 0;
}