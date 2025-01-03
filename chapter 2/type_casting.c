#include <stdio.h>

int main(){
    
    int n = 45;
    float m = 32.23;
    n = (int) m;
    printf("Integer of Float %.2f is %d\n",m,n);
    n = 42;
    char c = n;
    printf("Character of Integer %d is %c and 65 is %c",n,c,65);
    return 0;
}