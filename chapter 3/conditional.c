#include <stdio.h>

int main(){
    
    int option;
    int n;
    int a = 0, b = 0;
    Select_Option:
    printf(" Select Option\n 1.multiple table of number (0 is not considered)\n 2.min and max\n Enter Option : ");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Multiple Table\n");
        printf(" Enter a Number : ");
        scanf("%d",&n);
        if(n)/*float will also work*/{
            for (int i = 1; i <= 10; i++)
            {
                printf(" %2d  x  %d  = %3d\n",i,n,i*n);
            }
            printf(" Next time try entering 0\n");
        }
        else{
            printf("\"condition is skipped because of non zero rule\"\n");
        }
        break;
    case 2:
        printf("Min and Max\n");
        printf(" Enter Two Numbers\n A : ");
        scanf("%d",&a);
        printf(" B : ");
        scanf("%d",&b);
        if(a > b)
            printf(" Maximum is A : %d\n",a);
        else
            printf(" Maximum is B : %d\n",b);
        printf("\"A simple conditional program\"\n");
        break;
    
    default:
        printf("Select correct Option\n");
        goto Select_Option;
        break;
    }
    return 0;
}