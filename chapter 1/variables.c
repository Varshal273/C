#include <stdio.h>

int main(){
    int a = 1;
    float b = 1.9;
    char c = 'a';
    //COMMENT
    /*
        Chapter : 1
        Description : About variables
    */
    printf("DataTypes \t | \t Values \t | \t Sizeof (Byte)\n");
    printf("Integer \t | \t %d \t \t \t | \t %zu\n",a,sizeof(a));
    printf("Float \t \t | \t %f \t | \t %zu\n",b,sizeof(b));
    printf("Character \t | \t %c \t \t \t | \t %zu\n",c,sizeof(c));

    return 0;
}