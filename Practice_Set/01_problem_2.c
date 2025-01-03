#include <stdio.h>

int main(){
    
    const float pi = 3.142857;
    int r = 6;
    int h = 12;
    printf("Area of a circle with radius %d is %f\n",r,pi*r*r);
    printf("volume of a cylinder with radius  %d and height %d is %f\n",r,h,pi*r*r*h);
    
    return 0;
}