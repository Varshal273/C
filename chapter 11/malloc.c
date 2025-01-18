#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;      //float n ;
    printf("Enter the Size of the (int) Array : ");
    scanf("%d",&n); // %f
    int* ptr;   //float* ptr;
    ptr = (int*) malloc(n * sizeof(int));   // reserves n*sizeof(int) memory blocks and default or initial value remains garbage data
    //ptr = (float*) malloc(n * sizeof(float));
    for (int i = 0; i < n; i++){
        printf("Enter ptr[%d] : ",i);
        scanf("%d",&ptr[i]);    //%f
    }
    for (int i = 0; i < n; i++){
        printf("ptr[%d] : %d \n",i,ptr[i]); //%d %f
    }
    free(ptr);
    return 0;
}