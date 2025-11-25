
#include <stdio.h>
#include <limits>

int main() {
    char s[100];
    char max[20];
    char min[20];
    int max_length = INT_MIN;
    int min_length = INT_MAX;
    int current_count = 0;

    printf("Enter the sentence: ");
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] != ' ') {
            current_count++;
        }
        else if(s[i] == ' ') {
            if(current_count > max_length) {
                max_length = current_count;
            }
            if(current_count < min_length) {
                min_length = current_count;
            }
        }
    }
    
    return 0;
}