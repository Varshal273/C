#include <stdio.h>

int main(){
    
    int n, res=0;
    printf("Factorial!\n Enter Number : ");
    scanf("%d",&n);
    for(int i=n; i; i--){
        if(i == n){
            printf("%d",i);
            res = i;
            continue;
        }
        res *= i; 
        printf(" x %d",i);
    }
    printf("\nThe Factorial of %d : %d",n,res);
    return 0;
}