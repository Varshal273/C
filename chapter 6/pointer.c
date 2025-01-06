#include <stdio.h>

int main(){
    
    int a = 98;
    int* ptr_a = &a;
    
    char b = 'B';
    char* ptr_b = &b;

    float c = 22/7.0;
    float* ptr_c = &c;

    printf("Integer a \n value : %d\n address : %p | %u\n Value at %u : %d\n",a,ptr_a,ptr_a,ptr_a,*ptr_a);
    printf("Character b \n value : %c\n address : %p | %u\n Value at %u : %c\n",b,ptr_b,ptr_b,ptr_b,*ptr_b);
    printf("Float c \n value : %f\n address : %p | %u\n Value at %u : %f\n",c,ptr_c,ptr_c,ptr_c,*ptr_c);

    return 0;
}