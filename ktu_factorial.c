
#include <stdio.h>

long long factorial(long long n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main() {

    long long n;  

    printf("Enter number: ");
    scanf("%lld", &n);

    printf("Factorial: %lld", factorial(n));
    return 0;
}
