#include <stdio.h>

int main(){
    int b = 0,c = 0,n = 0,i;
    int option;
    printf("Break OR Continue\n");
    Select_Option:
    printf("select Option\n 1. Break\n 2. Continue\n 3. Non Zero rule\n 4. Demo\n Enter Option : ");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Enter loop Iteration (number of times loop will execute) : ");
        scanf("%d",&n);
        printf("Enter Break point : ");
        scanf("%d",&b);
        c = 0;
        break;
    case 2:
        printf("Enter loop Iteration (number of times loop will execute) : ");
        scanf("%d", &n);
        printf("Enter Continue (skip) point : ");
        scanf("%d",&c);
        b = 0;
        break;
    case 3:
        c = 0;
        b = 0;
        n = 5;
        break;
    case 4:
    printf("Demo\n");
        b = 1, c = 4,n = 5;
        break;
    default:
        goto Select_Option;
        break;
    }
    for(i = n ; i ; i--){
        if(i == c){
            printf("Continue at %d\n",i);
            continue;
        }
        if (i == b)
        {           
            printf("Break at %d\n",i);
            break;
        }
        printf("%d\n",i);
    }
    if(i == 0)
        printf("non zero rule, at %d loop will exit\n",i);
    return 0;
}