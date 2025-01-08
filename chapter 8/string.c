#include <stdio.h>

int main(){
    
    char st[] = {'a','b','c','d','e','\0'};
    char str[10];
    
    printf("String is Characcter Array!\n");
    for (int i = 0; st[i] != '\0'; i++){
        printf("%c\n",st[i]);
    }

    printf("String function\n%s\n",st);
    printf("Enter string : ");
    // scanf("%s",&str); // SAME SAME
    scanf("%s",str); // SAME SAME
    printf("String : %s\nBuffer Overflow [A Bug or Feature]\n",str);
    
    printf("Enter string : ");
    scanf("%9s",str); //  A new One | to prevent bug or feature
    printf("String : %s\n",str);
    
    return 0;
}