
#include <stdio.h>
#include <limits.h>

int main() {

    char s[100];
    char max[20];
    char min[20];
    int max_length = INT_MIN;
    int min_length = INT_MAX;
    int current_count = 0;
    int max_start_index = 0;
    int min_start_index = 0;

    printf("Enter the sentence: ");
    scanf("%20[$0-9a-zA-Z ]", s);

    int i;
    for (i = 0; s[i] != '\0'; i++) { 
        if (s[i] == ' ') {
            if (current_count > max_length) {
                max_length = current_count;
                max_start_index = i - current_count;
            }
            if (current_count < min_length) {
                min_length = current_count;
                min_start_index = i - current_count;
            }
            current_count = 0;
        }
        else {
            current_count++;
        }
    }
    if(current_count > 0) {
        if (current_count > max_length) {
            max_length = current_count;
            max_start_index = i - current_count;
        }
        if (current_count < min_length) {
            min_length = current_count;
            min_start_index = i - current_count;
        }
    }

    for (int i = max_start_index, j = 0; i < max_start_index + max_length; i++, j++) {
        max[j] = s[i];
    }
    max[max_length] = '\0';

    for (int i = min_start_index, j = 0; i < min_start_index + min_length; i++, j++) {
        min[j] = s[i];
    }
    min[min_length] = '\0';

    printf("Max:%s Min:%s", max, min);
    return 0;
}