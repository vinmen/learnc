
#include<stdio.h>

void merge(int numbers[], int start_index, int end_index) {
     
     int temp_numbers[100];
     int mid = (start_index + end_index) / 2;
     int start = start_index;
     int end = mid + 1;
     int i = 0;
     
     while(start <= mid && end <= end_index ) {
         if(numbers[start] <= numbers[end]) {
             temp_numbers[i] = numbers[start];
             i++;
             start++;
         }
         else {
             temp_numbers[i] = numbers[end];
             i++;
             end++;
         }
     }
     
     for(i = 0; i <= end_index; ++i) {
         numbers[i] = temp_numbers[i];
     }   
}

void merge_sort(int numbers[], int start_index, int end_index) {
    printf("start: %d end: %d \n", start_index, end_index);
    if(start_index >= end_index)
        return;
    
    int mid = (start_index + end_index) / 2;
    merge_sort(numbers, start_index, mid);
    merge_sort(numbers, mid + 1, end_index);
    merge(numbers, start_index, end_index);
}

int main() {

    int N = 4;
    int numbers[100] = {3, 5, 2, 1};
    int i; 

    //printf("Enter count: ");
    //scanf("%d", &N);
    //for(i = 0; i < N; ++i)
    //    scanf("%d", &numbers[i]);   
    
    merge_sort(numbers, 0, N - 1);    

    for(i = 0; i < N; ++i)
        printf("%d ", numbers[i]);   
        
    return 0;
}