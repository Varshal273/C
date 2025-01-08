#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n[3] = {0,0,0},arr[3][10];
    int* ptr = n;
    system("cls");
    printf("Multiple table of three Number's\n");
    for (int i = 0; i < 3; i++,ptr++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",ptr);
    }
    ptr = &arr;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++,ptr++){
            // arr[i][j] = n[i] * (j + 1); 
            *ptr = n[i] * (j + 1);
        }
    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 3; j++){
            printf("| %d x %2d = %3d |",n[j],i+1,arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}