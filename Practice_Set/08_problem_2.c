#include <stdio.h>

int mystrlen(char str[]){
    int i = 0,count;
    char c = str[i];
    while (c != '\0')   {
        c = str[i];
        i++;
    }
    count = i-1;
    // printf("%d\n",i);
    return count;
}

void mystrcpy(char target[],char source[]){
    int n = mystrlen(source);
    for (int i = 0; i <= n; i++)
    {
        target[i] = source[i];
    }

}

int main(){
    
    char source[] = "hello World!";
    char target[15];
    mystrcpy(target,source);
    printf("%s\n",source);
    printf("%s\n",target);
    return 0;
}