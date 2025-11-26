
#include <stdio.h>

int main() {

    char word1[20];
    char word2[20];
    int word1_length = 0;
    int word2_length = 0;
    int is_anagram = 1;
    int char_found = 0;
    char temp;    

    printf("Enter word1: ");
    scanf("%s", word1);
    printf("Enter word2: ");
    scanf("%s", word2);

    for(int i = 0; word1[i] != '\0'; i++)
        word1_length++;
    for(int i = 0; word2[i] != '\0'; i++)
        word2_length++;

    if(word1_length != word2_length) {
        is_anagram = 0;           
    }
    else {
        for(int i = 0; i < word1_length; i++) {
            char_found = 0;
            for(int j = i; j < word2_length; j++) {
                if(word1[i] == word2[j]) {
                    temp = word2[j];
                    word2[j] = word2[i];
                    word2[i] = temp;
                    char_found = 1;
                    break;
                }            
            }
            if(!char_found) {
                is_anagram = 0;
                break;
            }
        }
    }

    printf(is_anagram ? "YES" : "NO");
    return 0;
}