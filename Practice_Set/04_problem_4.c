#include <stdio.h>

int main(){
    
    int n,not_prime = 0;
    printf("Prime Number ?\nEnter Number : ");
    scanf("%d",&n);
    for(int i = 2;i < n;i++){
        if(n%i == 0 && n!=2){
            not_prime = 1;
            break;
        }
    }
    printf(not_prime?"%d is not prime Number":"%d is prime Number",n);
    return 0;
}