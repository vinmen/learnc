
/*
    Dynamic employee recording and retreval using malloc and free.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define NAME_BUF_SIZE 10

typedef struct {
    int id;
    char* name;    
} Employee;

int main() {

    int emplopyee_count = 0;
    int block_size = 2;
    char key = '\0';
    Employee* employee = NULL;
    int memory_added = 0;

    while(key != 'q') {

        printf("Enter command :");
        key = getch();

        if(key == 'a') {
            if(emplopyee_count == 0) {
                employee = (Employee *) malloc(block_size * sizeof(Employee));
                memory_added = 1;                
            }
            else if(emplopyee_count == block_size) {
                block_size = block_size + 2;  
                employee = (Employee *) realloc(employee, block_size * sizeof(Employee));                               
                memory_added = 1;
            }
            
            if(memory_added) {
                if(employee == NULL) {                   
                    exit(EXIT_FAILURE);
                }                
                for(int i = emplopyee_count; i < block_size; i++) {
                    employee[i].name = malloc(NAME_BUF_SIZE * sizeof(char));
                    if (employee[i].name == NULL) {                        
                        free(employee);
                        exit(EXIT_FAILURE);
                    }
                }
                memory_added = 0;
            }
            
            printf("\nEnter employee id, name:");
            scanf("%d %s", &employee[emplopyee_count].id, employee[emplopyee_count].name);
            emplopyee_count++;
        }
        else if(key == 'p') {            
            int id;
            printf("\nEnter employee id :");
            scanf("%d", &id);

            for(int i = 0; i < emplopyee_count; i++) {
                if (id != 0 && employee[i].id == id) {
                    printf("\nEmployee's name: %s\n", employee[i].name);
                    break;
                }
                else if(id == 0) {
                     printf("%d\t%s\n", employee[i].id, employee[i].name);
                }
            }
        }      
        else if(key == 'h') {
            printf("\nOptions:\n a - Add Employee\n p - Print Employee\n h - Help\n q - Quit\n");
        }
        else if(key != 'q') {
            for(int i = 0; i < block_size; i++) {
                 free(employee[i].name);
            }            
            free(employee);
            printf("\nh - Help.\n");
        }
    }

    return 0;
}