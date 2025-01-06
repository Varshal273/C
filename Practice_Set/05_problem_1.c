#include <stdio.h>

int fibonacci(int);

int fibonacci(int n){
    if( n == 1 || n == 2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    
    int n;
    printf("\"Fibonacci\"\n Enter Number : ");
    scanf("%d",&n);
    printf("The value of Fibonacci series at %d : %d",n,fibonacci(n));
    return 0;
}