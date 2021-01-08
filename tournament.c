
// tournament data structure to find max

#include <stdio.h>

int main() {

    int data[100], count;

    printf("Enter count :");
    scanf("%d", &count);
    for(int i = count; i <=  2 * count - 1; ++i) {
        scanf("%d", &data[i]);
    }
    printf("\n");

    for(int i = 2 * count - 1; i >= i/2; i = i - 2) {
        if(data[i] > data[i-1]) {
            data[i/2] = data[i];
        }
        else {
            data[i/2] = data[i - 1];
        }
    }

    for(int i = 1; i <= 2 * count - 1; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}