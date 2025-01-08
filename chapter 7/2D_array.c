#include <stdio.h>

int main(){
    
    int arr[3][2];
    int *ptr = arr;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++,ptr++){
            printf("Enter value of [%d][%d] : ",i,j);
            scanf("%d",ptr); // use only in sequential array input
            // Note: dont use & as ptr is allready delivering address
        }
    }
    ptr = &arr[0][0];
    printf("2d Array\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++,ptr++){
            printf("| [%d][%d] | Address : %u | value : %d |",i,j,ptr,*ptr); 
            // pointer *ptr POINTER
        }
        printf("\n");
    }
    
    return 0;
}