#include <stdio.h>
#include <unistd.h>

int sum (int a ,int b){
    int s = a+b;
    int* ptr = &s;
    printf("The sum is %d \n",s);
    return ptr;
}
float average (float a ,float b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("The average is %f \n",avg);
    return ptr;
}
int main(){
    int x = 4, y = 6;
    int* ptr1;
    float* ptr2;
    // system("cls");
    printf("Sum and Average\nEnter Two Numbers\n Enter First : ");
    scanf("%d",&x);
    printf(" Enter Second : ");
    scanf("%d",&y);
    ptr1 = sum(x,y);
    ptr2 = average(x,y);

    printf("The address of sum is %u and of average is %u",ptr1,ptr2);
    return 0;
}