#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr = fopen("file.txt","r");
    char ch;
    while (1){
        ch = fgetc(ptr);
        if (ch == EOF)  {
            break;
        }        
        printf("%c",ch);
    }
    
    fclose(ptr);
    return 0;
}