#include <stdio.h>

int main(){
    
    char st[] = "hello World!"; //This cannot be changed with string, need to use charcters to change
    char* ptr = "hi";           //This can be changed with string directly
    printf("String 1 : %s\n",st);
    printf("String 2 : %s\n",ptr);
    // st[] = "HELLO"; // XXXX IT IS NOT VALID
    st[0] = 'H';        //Like This
    ptr = "hello";      // This is easy
    printf("String 1 : %s\n",st);
    printf("String 2 : %s\n",ptr);
    return 0;
}