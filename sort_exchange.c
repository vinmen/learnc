
// Exchange sort implementation

#include <stdio.h>

int main() {
    int count, numbers[100], temp;

    printf("Enter count :");
    scanf("%d", &count);
    for(int i = 0; i < count; ++i) {
        scanf("%d", &numbers[i]);
    }   
    
    printf("Sorted List:\n");

    for(int i = 0; i < count; ++i) {
        for(int j = i + 1; j < count; ++j) {
            if(numbers[i] > numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for(int i = 0; i < count; ++i) {
        printf("%d ", numbers[i]);
    }

    return 0;
}