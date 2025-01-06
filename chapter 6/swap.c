#include <stdio.h>  
#include <stdlib.h>
#include <unistd.h>  

void swap(int *, int *);
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {  
    system("cls");
    int a = 0,b = 0;
    // sleep(3); // Pause for 3 seconds  
    printf("S w a p  - p a w S\n\nSwap Two Number's\n Enter A : ");
    scanf("%d",&a);
    printf(" Enter B : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\n");
    char c[10] = {'S','w','a','p','-','p','a','w','S','\0'};
    for (int i = 0; i < 9; i++)
    {
        printf("%c ",c[i]);
        usleep(250000);
    }
    printf("\n\nAfter Swap : \n A : %d\n B : %d",a,b);
    
    return 0;  
}  