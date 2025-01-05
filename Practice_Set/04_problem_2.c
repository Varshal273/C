#include <stdio.h>

int main(){
    
    int sum = 0;
    printf("Sum of All Number's of multiple of 8");
    for (int i = 1; i <= 10; i++)
    {   
        sum += i*8;
    }
    printf("Sum of multiple of : %d",sum);
    return 0;
}  