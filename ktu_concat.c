
#include <stdio.h>

int main() {
    char s1[20] = {'\0'};
    char s2[20] = {'\0'};
    char s[40] = {'\0'};
    int i;
    int j;

    printf("Enter words: ");
    scanf("%s", s1);
    scanf("%s", s2);
    
    for(i = 0; i < 20; i++) {
        if(s1[i] == '$')
            break;
        else {
            s[i] = s1[i];
        }
    }

    for(j = 0; j < 20; j++) {
        if(s2[j] == '$')
            break;
        else {
            s[i + j] = s2[j];
        }
    }
    printf("Output: %s", s);
    
    return 0;
}