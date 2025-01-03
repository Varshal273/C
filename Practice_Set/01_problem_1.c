#include <stdio.h>

int main(){
    int option;
    int length,breadth;
    printf("Program : Calculate area of rectangle\n\n");
    select_option:
    printf("Select Option\n 1.Hard Coded Inputs\n 2.User Inputs\n Enter Oprion : ");
    scanf("%d",&option);
    // printf("Selected option : %d\n",option);
    switch (option)
    {
    case 1:
        length = 5;
        breadth = 10;
        break;
    case 2:
        printf("Enter Lenght : ");
        scanf("%d",&length);
        printf("Enter Breadth : ");
        scanf("%d",&breadth);
        break;
    default:
        printf("Select correct option\n");
        goto select_option;
        break;
    }
    printf("Area of Rectangle\n A = %d\n B = %d\n Area = %d",length,breadth,length*breadth);
    // printf("Hello World");
    return 0;
}