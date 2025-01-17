#include <stdio.h>

typedef struct vector{
    int i,j;
} vec;

vec sumVector(vec v1, vec v2){
    vec v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main(){
    
    vec v1 = {1,2};     //new way to direct enter a data
    vec v2 = {5,6};     //new way to direct enter a data
    vec v3 = sumVector(v1,v2);
    printf("The value of vecter v1 is i : %d and j : %d\n",v1.i,v1.j);
    printf("The value of vecter v2 is i : %d and j : %d\n",v2.i,v2.j);
    printf("The Sum of vecter v1 and v2 is i : %di and j : %dj\n",v3.i,v3.j);
    return 0;
}