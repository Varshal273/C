#include <stdio.h>

int main(){
    
    float marks1,marks2,marks3;
    printf("Calculate result in percentage from marks of Three Subjects\n");
    printf("Enter Three Subject's mark\n Enter 1 : ");
    scanf("%f",&marks1);
    printf(" Enter 2 : ");
    scanf("%f",&marks2);
    printf(" Enter 3 : ");
    scanf("%f",&marks3);
    if(marks1<33 || marks2<33 || marks3<33)
        printf("Result : Falied\nRemarks : Due to Less Marks in Individual Subject(s)\n");
    else if((marks1+marks2+marks3)/3 <40)
        printf("Result : Falied\nPercentage : %.2f\nRemarks : Due to Less Percentage\n",(marks1+marks2+marks3)/3);
    else
        printf("Result : Passed\nPercentage : %.2f\nRemarks : Congratulation's you have passed exam\n",(marks1+marks2+marks3)/3);
    return 0;
}