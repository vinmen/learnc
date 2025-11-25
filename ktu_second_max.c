
#include <stdio.h>

int main() {

    int n;
    int nums[10]; 
    int temp;
    int loops = 2;

    printf("Enter number: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
        
    while(loops--) {
        for(int i = 0; i < n - 1; i++) {
            if(nums[i + 1] < nums[i]) {            
                temp = nums[i]; 
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }  
        }   
    }
    
    printf("Max: %d\n", nums[n - 1]);
    printf("Second Max: %d", nums[n - 2]);
    return 0;
}