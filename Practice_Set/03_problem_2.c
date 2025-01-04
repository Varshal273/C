#include <stdio.h>
float Tax_Calculator(float Income);
int main(){
    
    float income;
    float Tax;
    printf("Calculte Income Tax %%\n");
    printf("Enter Your Income : ");
    scanf("%f",&income);
    if(income < 250000)
        Tax = 0.0;
    else
        Tax = Tax_Calculator(income);
    printf("Tax paid by User : %.2f",Tax);
    return 0;
}

float Tax_Calculator(float income){
    float t;
    if(income > 250000 && income <= 500000)
        return 0.05 * (income - 250000);
    else if(income > 500000 && income <= 1000000)
        return 0.20 * (income - 500000) + 0.05 * (500000 - 250000);
    else if(income > 1000000)
        return 0.30 * (income - 1000000) + 0.20 * (1000000 - 500000) + 0.05 * (500000 - 250000);
}