#include <stdio.h>

int main(){
    
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u | %p\n",ptr,ptr);
    ptr++;
    printf("ptr++ \nThe value of ptr is %u | %p\n[increases pointer by 4 bytes (int)]\n",ptr,ptr);

    char print[] = "Hello World %d\n";
    printf(print,*--ptr);

    // This is interesting
    
    return 0;
}