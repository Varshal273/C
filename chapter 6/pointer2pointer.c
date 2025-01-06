#include <stdio.h>

int main(){
    
    int i = 6;
    int* j = &i;
    int** k = &j;
    printf("The value of i through i is : %d\n",i);
    printf("The value of i through *j is : %d\n",*j);
    printf("The value of i through **k is : %d\n",**k);
    printf("The value of i through *(&i) is : %d\n",*(&i));
    printf("The value of i through **(&j) is : %d\n",**(&j));
    printf("The value of i through ***(&k) is : %d\n",***(&k));

    return 0;
}