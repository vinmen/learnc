
#include <stdio.h>

int main() {
    int n;
    int temp;
    int reverse = 0;
    int digit;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        digit = temp % 10;        
        reverse = (reverse * 10) + digit;
        temp = temp / 10;
    }    

    printf(n == reverse ? "YES" : "NO");
    return 0;
}
