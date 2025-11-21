
#include <stdio.h>

int main() {
    int n;
    int is_prime = 1;
    printf("Enter number: ");
    scanf("%d", &n);    
    for(int i = 2; i < n / 2; i++) {
        if(n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    printf(is_prime == 1 ? "YES" : "NO");           
    return 0;
}