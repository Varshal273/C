#include <stdio.h>
#include <string.h>

typedef struct employee{
    float salary;
    int code;
    char name[10];
} Emp;

int main(){
    
    typedef int no;
    no a = 100;
    printf("%d\n",a);

    Emp e1,e2;
    // Emp* ptr = &e1;
    // typedef struct employee emp;
    e1.code = 5410;
    strcpy(e1.name,"Varshal");
    e1.salary = 45.44;
    e2.code = 5412;
    strcpy(e2.name,"Jadvani");
    e2.salary = 94.44;
    printf("| e1 | %5d | %-10s | %2.2f |\n",e1.code,e1.name,e1.salary);
    printf("| e2 | %5d | %-10s | %2.2f |\n",e2.code,e2.name,e2.salary);

    return 0;
    // Array in Structures

}