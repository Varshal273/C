#include <stdio.h>

int main(){
    
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    int* ptr = a;
    printf("| ptr : %d | value : %d | [ptr + 2]\n",ptr,*ptr);
    printf("| ptr : %d | value : %d |\n",ptr+2,*ptr+2);
    return 0;
}