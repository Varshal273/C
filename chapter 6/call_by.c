#include <stdio.h>
#include <stdlib.h>

// Call by reference
int ptr_sum(int * ,int * ,int *);
int ptr_sum(int* x ,int* y,int* z){
    *z = *x + *y;
}

// Call by value
int sum (int, int);
int sum (int a, int b){
    return a+b;
}
int main(){
    system("cls");
    int option = 0;
    int x,y,z;
    do
    {
        if(option > 2){
            system("cls");
            printf("\tSelect Correct Option\n");
        }
        printf("Call By ?\n Select Option \n 1. Value\n 2. Reference\n Enter Option : ");
        scanf("%d",&option);
    } while (option > 2);
    switch (option)
    {   
    case 1:
        system("cls");
        printf("Call By Value!\nSum of Two numbers\n Enter First : ");
        scanf("%d",&x);
        printf(" Enter Second : ");
        scanf("%d",&y);
        printf("The Sum of X and Y : %d",sum(x,y));
        break;
    case 2:
        system("cls");
        printf("Call By Reference!\nSum of Two numbers\n Enter First : ");
        scanf("%d",&x);
        printf(" Enter Second : ");
        scanf("%d",&y);
        ptr_sum(&x,&y,&z);
        printf("The Sum of X and Y is Z : %d",z);

        break;
    default:
        break;
    }
    return 0;
}