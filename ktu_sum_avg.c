
#include <stdio.h>

int main() {

    int n;
    int nums[20];
    int sum = 0;    

    printf("Enter no:");
    scanf("%d", &n);
    
    for(int i = 0; i < n; ++i) {
        scanf("%d", &nums[i]);
        sum = sum + nums[i];
    }

    printf("Sum :%d\n", sum);
    printf("Avg :%.2f", (float) (sum) / n);

    return 0;
}