#include <stdio.h>
#include <stdlib.h>

typedef struct complex_number  
{
    int real;
    int imaginary;    
} Complex;

void display(Complex c,int i){
    printf("[%d]\t",i+1);
    printf("The value of Complex NUmber is %d + %di\n",c.real,c.imaginary);
}

int main(){
    
    Complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        // system("cls");
        printf("[%d]\n",i+1);
        printf("Enter Real Number : ");
        scanf("%d",&carr[i].real);
        printf("Enter Imaginary Number : ");
        scanf("%d",&carr[i].imaginary);
        // system("cls");
    }
    for (int i = 0; i < 5; i++){
        display(carr[i],i);
    }
    return 0;
}