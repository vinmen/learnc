
/*
    C Refresher from UWM on youtube - https://www.youtube.com/watch?v=A58eDMe6hpI
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int mydup2(char* input, char** output) {
    *output = malloc(strlen(input) + 1);
    if(*output == NULL)
        return 1;
    memcpy(*output, input, strlen(input) + 1);
    return 0;
}

char* mydup(char* orig) {
    char* new = malloc(strlen(orig) + 1);
    assert(new != NULL);
    memcpy(new, orig, strlen(orig) + 1);
    return new;
}

char* getmsg2() {
    char msg[] = "Hello MSG2";
    return mydup(msg);
}

char* getmsg() {
    char msg[] = "Hello MSG";
    return strdup(msg);
}

int main(int argc, char* argv[]) {
	printf("Hello world\n");
    
    char msg[] = "Hello World2\n";
    printf("%s", msg);
    
    char msg2[] = "AAAAAAAAAA";
    printf("strlen: %ld\n", strlen(msg2));
    printf("sizeof: %ld\n", sizeof(msg2));
    printf("msg2[10]: %d\n", msg2[10]);
    
    char* ptr;
    ptr = msg;
    printf("ptr len: %ld\n", sizeof(ptr));

    
    char msg3[5];
    snprintf(msg3, sizeof(msg3), "AAAA");
    printf("%s\n", msg3);

    printf("%s\n", getmsg());
    printf("%s\n", getmsg2());

    char* input = "Hello";
    char* output;
    mydup2(input, &output);
    printf("%s\n", output);
    
    return 0;
}
