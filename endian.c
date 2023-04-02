#include <stdio.h>

int main() {
    int i = 0x12345678;    
    char *cp = (char *)&i;

    printf("%x :: %p\n", i, &i);
    printf("%x :: %p\n", *cp, cp);

    for(int i = 0; i < 4; ++i) {
         printf("%x :: %p\n", *(cp + i), cp + i);
    }

    return 0;
}