#include <stdio.h>

int main(){
    
    int arr[3][3][3];
    int* ptr = arr;
    printf("using array for loop\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                printf("| [%d][%d][%d] : %u |",i,j,k,&arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("Using *pointer\n");
    for (int i = 0; i < 3*3*3; i++,ptr++)
    {
        if(i % 9 == 0 && i)
            printf("\n");
        if(i % 3 == 0 && i)
            printf("\n");
        printf("| %u |",ptr);
    }
    
    return 0;
}