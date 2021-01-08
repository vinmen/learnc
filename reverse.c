
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