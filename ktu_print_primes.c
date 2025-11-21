
#include <stdio.h>

int is_prime(int n) {
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            return 0;           
        }
    }

    return 1;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int i = 2;
    while(n > 0) {
        if(is_prime(i)) {
            printf("%d ", i);
            n--;
        }
        i++;
    }    
    return 0;
}
