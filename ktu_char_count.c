
#include <stdio.h>

int main() {

    char s[20] = {'\0'};    
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;

    printf("Enter word: ");    
    scanf("%20[$0-9a-zA-Z ]", s);

    for(int i = 0; i < 20; i++) {
        if(s[i] == '$')
            break;
        else if(s[i] == ' ')
            spaces++;
        else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            vowels++;
        else
            consonants++;        
    }

    printf("Vowels: %d Consonanats: %d Spaces: %d", vowels, consonants, spaces);
    
    return 0;
}