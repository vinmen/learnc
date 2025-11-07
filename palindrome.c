
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if(x < 0)
        return false;
    if(x < 10)
        return true;
    
    int num = x;
	int quotient;
	int remainder;	
    int digits[10];
    int count = 0;

    for (int i = 0; i < 10; ++i)
	{
		quotient = num / 10;
		remainder = num % 10;	
        num = quotient;

        digits[i] = remainder;
        count = i + 1;

		if (quotient == 0)           
		    break;
	}

    for (int j = 0; j < count/2; ++j)
	{
		if(digits[j] != digits[count - 1 - j])
            return false;
	}
    
    return true;    
}

int main() {
    if(isPalindrome(123321))
        printf("true");
    else
        printf("false");
    return 0;
}
