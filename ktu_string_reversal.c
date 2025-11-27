
#include <stdio.h>

int main() {

    char string[20];    
    int length = 0;
    char temp;

    printf("Enter string: ");
    scanf("%s", string);

    for(int i = 0; string[i] != '\0'; i++)
        length++;
    
    for(int i = 0; i < length / 2; i++) {
        temp = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temp;
    }

    printf("Reverse string: %s", string);

    return 0;
}