#include <stdio.h>

int main(){

    int i = 1,n = 1;
    int option;
    int sum = 0;
    Select_Option:
    printf("Choose Loop Option\n 1. Do While Loop\n 2. While Loop\n 3. For Loop\n Enter Choice : ");
    scanf("%d",&option);
    printf("Sum of N natural numbers\n");
    switch (option)
    {
    case 1:
        printf("Enter Number : ");
        scanf("%d",&n);
        do{
            sum += i;
            i++;
        } while (i<=n);
        break;
    case 2:
        printf("Enter Number : ");
        scanf("%d",&n);
        while (i<=n){
            sum += i;
            i++;
        }
        break;
    case 3:
        printf("Enter Number : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            sum += i;
        } 
        break;
    default:
        printf("Enter Correct Option \n");
        goto Select_Option;
        break;
    }
    printf("the Sum of First %d Natural number : %d",n,sum);
    return 0;
} 