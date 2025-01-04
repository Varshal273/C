#include <stdio.h>

int main(){
    
    int year;
    printf("Leap Year (4) ");
    printf("Enter year : ");
    scanf("%d",&year);
    printf((year%4 == 0 && year%100 != 0) || year%400 == 0 ? "This %d is a Leap Year":"This %d is not a Leap Year",year);
    return 0;
}