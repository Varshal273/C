#include <stdio.h>
#include <string.h>

int main(){
    
    char str[10];
    printf("Buffer Overflow Solution\nTry it\n");
    printf("Enter String : ");
    fgets(str,sizeof(str),stdin);   
    /*Advantages:
    Bounds Checking: Limits the number of characters read, preventing buffer overflow.
    Includes Newline: If a newline is encountered before reaching the specified limit, it is included in the string.
    Safer Alternative: Preferred over gets.*/
    puts(str);   //puts function uses \n at the end of line
    printf("Defined Array Size : 10\nActucal Array Size : %d\nThis is Solution\n",strlen(str));
    return 0;
}