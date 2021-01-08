<<<<<<< HEAD

#include <stdio.h>
#include <stdint.h>

int reverse(int x)
{
	int num = x;
	int quotient;
	int remainder;
	int digits = 0;

	for (int i = 0; i < 10; ++i)
	{
        if (digits > 214748364 || digits < -214748364 )
             return 0;

		quotient = num / 10;
		remainder = num % 10;	
        num = quotient;			

		printf("%d %d %d\n", quotient, remainder, digits);               

        digits = (digits * 10) + remainder;

		if (quotient == 0)           
			return digits;
	}
	return digits;
}

int main() {   
	printf("final :: %d",reverse(-2147483648));
	return 0;
}
=======
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

>>>>>>> 846339cd422da5fccf5361080c6df0f203535ba5
