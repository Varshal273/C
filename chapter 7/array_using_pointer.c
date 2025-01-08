#include <stdio.h>

int main(){
    
    int marks[] = {12, 34, 53, 66};

    // int* ptr = marks;       // Both are SAME
    int* ptr = &marks[0];

    for (int i = 0; i < 4; i++,ptr++){
        // both are SAME
        printf("index %d | marks %d\n",i,marks[i]);
        printf("index %d | marks %d\n",i,*ptr);
    }
    
    return 0;
}