
#include <stdio.h>

int main() {
    int n;
    int nums[20];
    int search;
    int found = 0;

    printf("Enter no: ");
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &nums[i]);
    }

    printf("Search for: ");
    scanf("%d", &search);
    for(int i = 0; i < n; ++i) {
        if(nums[i] == search) {
            found = 1;
            break;
        }
    }
    printf(found ? "FOUND" : "NOT FOUND");
    return 0;
}