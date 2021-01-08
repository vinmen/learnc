#include <stdio.h>
#include <stdlib.h>

int main() {	
	
	int digits = 0;
	int x;
	printf("Enter number :");
	scanf("%d", &x);		
	
	if(x < 10)
		digits = 1;
	else {
		while (x > 9) {
			x = x / 10;
			++digits;
		}
		++digits;
	}	

	printf("digits: %d\n", digits);
	return 0;
}

