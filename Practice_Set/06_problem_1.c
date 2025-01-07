#include <stdio.h>

// void changr_to_ten_time(int *); // Can be skip if function is defined before main()
void changr_to_ten_time(int* a){
    *a = *a * 10;
}
int main(){
    
    int x = 45;
    printf("The value of x is %d \n",x);
    changr_to_ten_time(&x);
    printf("The value of x is %d \n",x);
    return 0;
}