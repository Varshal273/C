#include <stdio.h>

int main(){
    
    printf("Type Conversion\n");
    float a = 22;
    int b = 7;
    float c = a/b;
    printf("The a: %.2f b: %d value of a/b is %f\n",a,b,c);
    int d = 68;
    printf("value of int d: %d in character is %c\n",d,d);
    int e = printf("hello world");
    printf("\nthe value return by above print statement is %d\n",e);
    float a1 = 3, a2 = 6, a3 = 9;
    printf("Associativity left > right\n");
    printf("a*b/c = %.1f \na/b*c = %.1f",a1*a2/a3,a1/a2*a3);
    return 0;
}