
#include <stdio.h>

int main() {
    struct record {
        char *name;
        //char title[20];
        int age;
    };

    char *test = "vin";
    
    struct record rec1;
    rec1.age = 12;
    rec1.name = test;
    //rec1.title[20] = "tester2";

    struct record* rec2;

    rec2 = &rec1;

    rec2->age = 15;
    //rec2->name[20] = "vin2";
    //rec2->title[20] = "tester2";

    printf("rec1:age %d\n", rec1.age);
    printf("rec2:age %d", rec2->age);

    return 0;
}
