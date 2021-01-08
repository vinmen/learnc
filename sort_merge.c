
#include <stdio.h>

void merge(int numbers[], int i, int m, int j) {

    int x = 0;
    int y = 0;
    int l = m - i + 1;
    int r = j - m; 
    int L[l];
    int R[r];    

    for(int a = i; a <= m; ++a) {
        L[x] = numbers[a];
        x++;
    }

    for(int a = m + 1; a <= j; ++a) {
        R[y] = numbers[a];
        y++;
    }

    
    

    
}

void merge_sort(int numbers[], int i, int j) {   

    if(i >= j) 
        return;    

    int m = (i + j) / 2;
    merge_sort(numbers, i, m);
    merge_sort(numbers, m + 1, j);              
    merge(numbers, i, m, j);    
}

int main() {

    int N;
    int numbers[100];

    scanf("%d", &N);
    for(int i = 0; i < N; ++i)
        scanf("%d", &numbers[i]);
    
    merge_sort(numbers, 0, N - 1);

    for(int i = 0; i < N; ++i)
        printf("%d ", numbers[i]);

    return 0;
}