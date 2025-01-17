#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr = fopen("file.txt","r");
    // ptr = fopen("file.txt","w");
    // ptr = fopen("file.txt","a");
    char c = fgetc(ptr);
    printf("%c\n",c);
    // fputc('c',ptr);
    fclose(ptr);
    return 0;
}