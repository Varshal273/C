#include <stdio.h>

int main(){
    
    int a = 2342354;
    printf(a%97==0?"%d Divisible by 0 remainder %d\n":"%d Not divisible by 0 remainder %d\n",a,a%97);
    a = 3349895;
    printf(a%97==0?"%d Divisible by 0 remainder %d\n":"%d Not divisible by 0 remainder %d\n",a,a%97);

    return 0;
}