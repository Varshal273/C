#include <stdio.h>

int main(){
    
    char ch = 'a';
    printf("is Charater LowerCase?\n");
    printf("Character : %c \nValue of %c : %d [Range : 97-122]\n",ch,ch,ch);
    printf((ch >= 97 && ch <= 122)?"This Character (%c) is LowerCase\n":"This Character (%c) is Not LowerCase\n",ch);
    return 0;
}