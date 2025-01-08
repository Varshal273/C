#include <stdio.h>

int main(){
    
    int marks[5];
    printf("Enter Marks of 5 students \n");
    for (int i = 0; i < 5; i++){
        printf("Student %d : ",i);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("\nindex : %d | marks : %d | address : %u",i,marks[i],&marks[i]);
    }
    
    
    return 0;
}