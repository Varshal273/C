#include <stdio.h>

int factorial (int);

int factorial(int n ){
    if(n == 1 || n == 0){  // Base Condition
        return 1;          // It really works!
    }
    return factorial(n-1) * n;
}

int main(){

    int a;
    printf("Factorial ! \nEnter a Number : ");
    scanf("%d",&a);    
    printf("Factorial of %d : %d",a,factorial(a));
    return 0;
}