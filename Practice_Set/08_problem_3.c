#include <stdio.h>
#include <string.h>
int main(){
    
    char str[] = "Hello World! how are you?";
    printf("Orignal String : %s\n",str);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        str[i] = str[i] + 1;
    }
    printf("Encrypted String : %s\n",str);
    for (int i = 0; i < n; i++)
    {
        str[i] = str[i] - 1;
    }
    printf("DEncrypted String : %s\n",str);
    return 0;
}