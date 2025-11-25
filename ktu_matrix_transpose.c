
#include <stdio.h>

int main() {
    int a[2][3];
    int t[3][2];

    printf("Enter matrix: ");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("---------- Input -----------\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }    

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            t[i][j] = a[j][i];
        }        
    }

    printf("----------- Output ----------\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}