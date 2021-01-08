// Find max of n numbers

#include <stdio.h>

int main() {
    int count, number, max;

    printf("Enter count :");
    scanf("%d", &count);
    if(count == 0)
	return 0;
    scanf("%d", &max);
    for(int i = 1; i < count; ++i) {
        scanf("%d", &number);
        if(number > max)
            max = number;
    }
    printf("Max :%d\n", max);

    return 0;
}
