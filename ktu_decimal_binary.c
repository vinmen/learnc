
#include <stdio.h>

int main() {
    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    int binary[10];
    int i = 0;
    while(n > 1) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    binary[i] = 1;

    for(int j = i; j >= 0; j--) {        
        printf("%d", binary[j]);        
    }

    return 0;
}
