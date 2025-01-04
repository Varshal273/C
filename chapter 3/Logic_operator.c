#include <stdio.h>
int And_Gate(int a,int b);
int Nand_Gate(int a,int b);
int Or_Gate(int a,int b);
int Nor_Gate(int a,int b);
int main(){
    
    int a,b;
    printf("Truth Table\n");
    printf("    A    B\t\t\t   AND\t\t\t OR\t\t\t  NAND\t\t\t NOR");
    for(a = 0; a < 2; a++){
        for(b = 0; b < 2; b++){
            printf("\n");
            printf("%5d%5d",a,b);
            printf("\t\t\t%5d",And_Gate(a,b));
            printf("\t\t\t%5d",Or_Gate(a,b));
            printf("\t\t\t%5d",Nand_Gate(a,b));
            printf("\t\t\t%5d",Nor_Gate(a,b));
        }
    }
    return 0;
}
int And_Gate(int a, int b){
    return a&&b;
}
int Or_Gate(int a, int b){
    return a||b;
}
int Nand_Gate(int a, int b){
    return !(a&&b);
}
int Nor_Gate(int a, int b){
    return !(a||b);
}