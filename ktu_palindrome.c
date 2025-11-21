
#include <stdio.h>

int main () {
    char s[20] = {'\0'};
    int is_palindrome = 1;

    printf("Enter word: ");
    scanf("%s", s);

    int len = 0;
    for(int i = 0; i < 20; i++) {
        if(s[i] != '\0')
            len++;
    }

    for(int i = 0; i < len / 2; i++) {
        if(s[i] != s[len - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }
    
    printf(is_palindrome ? "YES" : "NO");
    return 0;
}