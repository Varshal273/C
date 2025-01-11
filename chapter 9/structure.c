#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    char name[10];
    float salary;
};

int main(){
    
    struct employee e1,e2,e3;

    printf("Enter the value of Code : ");
    scanf("%d",&e1.code);
    printf("Enter the value of Salary : ");
    scanf("%f",&e1.salary);
    printf("Enter the value of Name : ");
    scanf("%s",&e1.name);

    printf("Enter the value of Code : ");
    scanf("%d",&e2.code);
    printf("Enter the value of Salary : ");
    scanf("%f",&e2.salary);
    printf("Enter the value of Name : ");
    scanf("%s",&e2.name);

    printf("Enter the value of Code : ");
    scanf("%d",&e3.code);
    printf("Enter the value of Salary : ");
    scanf("%f",&e3.salary);
    printf("Enter the value of Name : ");
    scanf("%s",&e3.name);

    printf("| %5d | %10s | %2.2f |\n",e1.code,e1.name,e1.salary);
    printf("| %5d | %10s | %2.2f |\n",e2.code,e2.name,e2.salary);
    printf("| %5d | %10s | %2.2f |\n",e3.code,e3.name,e3.salary);
    
    // e1.code = 5411;
    // strcpy(e1.name,"Varshal");
    // e1.salary = 45.44;
    // printf("Hello World");
    return 0;
}