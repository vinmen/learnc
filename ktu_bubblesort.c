
#include <stdio.h>

int main() {
    int n;
    int nums[20];
    int temp;
    int swap = 0;

    printf("Enter no: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < n; i++) {
        swap = 0;
        for(int j = 0; j < n - i - 1; j++) {
            if(nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swap = 1;

                for(int i = 0; i < n; i++) {
                    printf("%d ", nums[i]);
                }
                printf("\n");
            }            
        }        
        if(swap == 0) {
            break;
        }        
    }

    //for(int i = 0; i < n; i++) {
    //    printf("%d ", nums[i]);
    //}    
    
    return 0;
}