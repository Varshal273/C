#include <stdio.h>
#include <string.h>

struct employee{
    float salary;
    int code;
    char name[16];
};

// void input(){

// }

int main(){

    struct employee e1,e2;
    e1.code = 5411;
    strcpy(e1.name,"Varshal");
    e1.salary = 45.44;
    e2.code = 5412;
    strcpy(e2.name,"Jadvani");
    e2.salary = 94.44;
    printf("| e1 | %5d | %10s | %2.2f |\n",e1.code,e1.name,e1.salary);
    printf("| e2 | %5d | %10s | %2.2f |\n",e2.code,e2.name,e2.salary);

    printf("\n");

    printf("| %u |\n",&e2.salary);
    printf("| %u |\n",&e2.code);
    printf("| %u |\n",&e2.name);
    struct employee *ptr;
    ptr = &e2;

    printf("\n");
    // Arrow operator
    printf("| ptr : %u |",ptr);
    printf("| %5d | %10s | %2.2f |\n",ptr->code,ptr->name,ptr->salary);

    ptr++;  //jump to next struct
    
    printf("| ptr : %u |",ptr);
    printf("| %5d | %10s | %2.2f |\n",(*ptr).code,(*ptr).name,(*ptr).salary);

    return 0;
}