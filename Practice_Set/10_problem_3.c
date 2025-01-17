// array_in_structures.c refrenced
#include <stdio.h>
#include <string.h>

typedef struct employee{
    float salary;
    int code;
    char name[10];
} Emp;

void write_in_file (Emp e,FILE *ptr){
    fprintf(ptr,"| %5d | %-10s | %09.4f |\n",e.code,e.name,e.salary);
}

int main(){

    char u[] = "user_";
    char temp;
    Emp facebook[10];
    FILE *ptr = fopen("Emp_data.txt","w");
    // header
    fprintf(ptr,"| %5s | %-10s | %9s |\n","code","name","salary");

    for (int i = 0; i < 10; i++){
        facebook[i].code = i*1000/25;
        facebook[i].salary = i*22/7.0;
        strcpy(facebook[i].name, u);
        facebook[i].name[5] = i+48;
        facebook[i].name[6] = '\0';
        write_in_file(facebook[i],ptr);
    }

    fclose(ptr);
    return 0;
}