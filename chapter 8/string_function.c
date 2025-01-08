#include <stdio.h>
#include <string.h>

int main(){
    
    char st1[20] = "Hello";
    char st2[20] = " World!";
    char st3[10];
    printf("| String Length st1 \t\t| %12s \t\t | %2d \t  |\n",st1,strlen(st1));
    printf("| String Length st2 \t\t| %12s \t\t | %2d \t  |\n",st2,strlen(st2));
    strcpy(st3,st1);
    printf("| String copy st3=st1 \t\t| %12s \t\t | %2d \t  |\n",st3,strlen(st3));
    strcat(st1,st2);
    printf("| String concat st1:st2 \t| %12s \t\t | %2d \t  |\n",st1,strlen(st1));
    int a = strcmp(st1,st2);
    printf("| String compare st1:st2 \t| %12s | %7s | %2d |%2d | %2d |\n",st1,st2,strlen(st1),strlen(st2),a);

    return 0;
}