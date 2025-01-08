#include <stdio.h>
#include <string.h>

int main(){
    
    char str[10];
    printf("Buffer Overflow (exceding the limit of array)\nTry to Enter String longer than 10 character with no spacing\n");
    printf("Enter String : ");
    scanf("%s",str);
    //a single word string
    //it will store string even if it exceeds the array limit
    printf("String : %s\n",str);
    printf("Defined Array Size : 10\nActucal Array Size : %d\nThis is Buffer_OverFlow\n",strlen(str));
    return 0;
}