#include <stdio.h>

int sum_natural(int);

int sum_natural(int n){
    if(n-1)
        return sum_natural(n-1) + n;
    else
        return 1;
}
int main(){
    
    int n = 5;
    printf("Sum of %d Natural number is %d",n,sum_natural(n));
    return 0;
}