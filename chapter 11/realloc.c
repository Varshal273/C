#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n,num;
    printf("Enter the Size of the (int) Array : ");
    scanf("%d",&n);
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        printf("Enter ptr[%d] : ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++){
        printf("ptr[%d] : %d | %u\n",i,ptr[i],&ptr[i]);
    }
    printf("Change the Size of the (int) Array : ");
    scanf("%d",&num);
    // if the new size is more than previous size it will allocate new memory from last memory address
    ptr = realloc(ptr,num * sizeof(int));
    printf("New Size : \n");
    for (int i = 0; i < num; i++){
        printf("ptr[%d] : %d | %u\n",i,ptr[i],&ptr[i]);
    }
    printf("\nOld Size : \n");
    for (int i = 0; i < n; i++){
        printf("ptr[%d] : %d | %u\n",i,ptr[i],&ptr[i]);
    }
    free(ptr);   
    return 0;
}

// output : 

// Enter the Size of the (int) Array : 5
// Enter ptr[0] : 1
// Enter ptr[1] : 2
// Enter ptr[2] : 3
// Enter ptr[3] : 4
// Enter ptr[4] : 5
// ptr[0] : 1 | 11612000
// ptr[1] : 2 | 11612004
// ptr[2] : 3 | 11612008
// ptr[3] : 4 | 11612012
// ptr[4] : 5 | 11612016
// Change the Size of the (int) Array : 3
// New Size : 
// ptr[0] : 1 | 11612000
// ptr[1] : 2 | 11612004
// ptr[2] : 3 | 11612008

// Old Size :
// ptr[0] : 1 | 11612000
// ptr[1] : 2 | 11612004
// ptr[2] : 3 | 11612008
// ptr[3] : 4 | 11612012
// ptr[4] : 5 | 11612016

// output_2:

// Enter the Size of the (int) Array : 3
// Enter ptr[0] : 1
// Enter ptr[1] : 2
// Enter ptr[2] : 3
// ptr[0] : 1 | 8335200
// ptr[1] : 2 | 8335204
// ptr[2] : 3 | 8335208
// Change the Size of the (int) Array : 5
// New Size : 
// ptr[0] : 1 | 8335200
// ptr[1] : 2 | 8335204
// ptr[2] : 3 | 8335208
// ptr[3] : 1331454326 | 8335212
// ptr[4] : 83886085 | 8335216

// Old Size :
// ptr[0] : 1 | 8335200
// ptr[1] : 2 | 8335204
// ptr[2] : 3 | 8335208