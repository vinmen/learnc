#include <stdio.h>

#define MATRIX_ROW 5
#define MATRIX_COL 5

void print_ring(int loop, int m[][MATRIX_COL], int o[], int* index) {

    int r1 = loop;
    int c1 = loop;
    int r2 = MATRIX_ROW - loop;
    int c2 = MATRIX_COL - loop;
    
    for(int i = c1; i < c2; ++i) {
        o[(*index)++] = m[r1][i];
    }

    for(int i = r1 + 1; i < r2; ++i) {
        o[(*index)++] = m[i][c2 - 1];
    }

    for(int i = c2 - 2; i >= c1; --i) {
        o[(*index)++] = m[r2 - 1][i];
    }

    for(int i = r2 - 2; i >= r1 + 1; --i) {
        o[(*index)++] = m[i][c1];
    }
}

int main() 
{
    int m[MATRIX_ROW][MATRIX_COL];    
    int o[MATRIX_ROW * MATRIX_COL] = {0};

    int v = 1;
    for(int i = 0; i < MATRIX_ROW; ++i) {
        for(int j = 0; j < MATRIX_COL; ++j) {
            m[i][j] = v++;
        }
    }

    for(int i = 0; i < MATRIX_ROW; ++i) {
        for(int j = 0; j < MATRIX_COL; ++j) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    int index = 0;
    for(int i = 0; i <= MATRIX_ROW / 2; ++i) {
         print_ring(i, m, o, &index);  
    }   

    for(int i = 0; i < MATRIX_ROW * MATRIX_COL; ++i) {
        printf("%d\n", o[i]);
    }

    return 0;
}