
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *generateMessage(const char *message, const char *username) {

    size_t messageLength = strlen(message);
    size_t usernameLength = strlen(username);
    size_t greetingLength = messageLength + usernameLength + 1;

    char *greetingMessage = (char *)malloc(greetingLength * sizeof(char));    
    if (greetingMessage == NULL) {        
        perror("Failed to allocate memory");
        return NULL;
    }
    strcpy(greetingMessage, message);
    strcat(greetingMessage, username);
   
    return greetingMessage;    
}

int main(int argc, char *argv[]) {
    
    printf("Hello World!\n");

    char msg[] = "Hello World!\n";
    printf("%s", msg);
    printf("%ld\n", strlen(msg)); 
    printf("%ld\n", sizeof(msg)); 

    char *message = generateMessage("Hello :: ", "C");    
    if (message != NULL) {
        printf("%s\n", message);        
        free(message);
    }    

    return 0;
}