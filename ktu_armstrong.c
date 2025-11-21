
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int digits;
    int sum = 0;
    int arr[10] = {0};

    printf("Enter number: ");
    scanf("%d", &n);

    int temp = n;   
    while(temp > 0) {
        arr[digits] = temp % 10;
        digits++;
        temp = temp / 10;
    }
    
    int index = digits;
    while (index--)
        sum = sum + pow(arr[index], digits);    

    printf(sum == n ? "YES" : "NO");
    return 0;
}