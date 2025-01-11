#include <stdio.h>
#include <string.h>

typedef struct employee{
    float salary;
    int code;
    char name[10];
} Emp;

void show (Emp e){
        printf("| %5d | %-10s | %09.4f |\n",e.code,e.name,e.salary);
        //                     /\
        // % indicates the start of a format specifier.
        // 0 means to pad with zeroes if the output is shorter than the specified width.
        // 9 is the total minimum width of the output (including the decimal point).
        // .4 specifies that 4 digits should appear after the decimal point.
        // f formats the number as a floating-point number.
}

int main(){

    char u[] = "user_";
    char temp;
    Emp facebook[10];

    for (int i = 0; i < 10; i++){
        facebook[i].code = i*1000/25;
        facebook[i].salary = i*22/7.0;
        // strcat(u,temp);
        strcpy(facebook[i].name, u);
        facebook[i].name[5] = i+48;
        facebook[i].name[6] = '\0';
        show(facebook[i]);
    }
        // printf("| %5d | %10s | %2.2f |\n",facebook[1].code,facebook[1].name,facebook[1].salary);

    // facebook
    return 0;
}