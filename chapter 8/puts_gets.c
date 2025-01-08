#include <stdio.h>
#include <string.h>

int main(){
    
    // lets use gets and puts
    char string[10];

    printf("Buffer Overflow (exceding the limit of array)\nTry to Enter String longer than 10 character with spacing\n");
    printf("(gets)\nEnter String : ");
    gets(string);
    
    // gets function is also exploited to Buffer_OverFlow bug
    puts(string);   //puts function uses \n at the end of line
    printf("Defined Array Size : 10\nActucal Array Size : %d\nThis is Buffer_OverFlow\n",strlen(string));
    return 0;
}