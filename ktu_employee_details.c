
#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    char email[50];
};

int main() {

    struct Employee employee;
    
    printf("Enter employee details:");
    printf("\nid: ");
    scanf("%d", &employee.id);
    printf("\nName: ");
    scanf("%s", &employee.name);
    printf("\nEmail: ");
    scanf("%s", &employee.email);

    return 0;
}