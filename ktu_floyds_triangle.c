
#include <stdio.h>

int main() {

    int rows = 0;
    int number = 1;
    printf("Enter rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", number++);
        }
        printf("\n");
    }

    return 0;
}