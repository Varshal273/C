#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    printf("Enter the Size of the (int) Array : ");
    scanf("%d",&n); 
    int* ptr;
    ptr = (int*) calloc(n,sizeof(int)); //reserves a memory of n block of sizeof(int) and assigns 0 as default or initial value
    // in above n assigns 0 to n number of memory blocks
    // there are no limit of bounds in ptr array
    // we can assign 1 block of memory and continue to change or increase the size without realloc 
    // DANGEROUS!
    if(ptr != NULL){
        for (int i = 0; i <= n; i++){   //try n+1
            printf("Enter ptr[%d] : ",i);
            scanf("%d",&ptr[i]);
        }
        for (int i = 0; i <= n; i++){   //try n+1
            printf("ptr[%d] : %d \n",i,ptr[i]);
        }
        free(ptr);  //free's the memory
        printf("ptr[0] : %u\n",ptr[0]);
    }
    else{
        printf("Not Sufficient Memory!\n");
    }
    return 0;
}