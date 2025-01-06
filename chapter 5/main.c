#include <stdio.h>
#include "square.h"

int main(){
    
    int side;
    printf("Enter The side Length of the square : ");
    scanf("%d",&side);

    double area = calculate_square_area(side);
    printf("The area of the square is : %.2f\n",area);
    return 0;
}
// gcc -c square.c                   
// gcc -c main.c                     
// gcc -o square_area main.o square.o