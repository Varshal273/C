#include <stdio.h>

int main(){
    
    int a;
    scanf("%d",&a);
    int d = printf("a : %d\n",a);
    printf("previous statement lenght is : %d\n",d);
    //'a' - 1, ' ' - 2, ':' - 3, ' ' - 4, '%d' - 5(size of integer), '\n' - 6 
    /*  '/' is a escape sequence charater                             /\
        but count as a 1 single charater                              || 
        \n: Newline (moves the cursor to the beginning of the next line)
        \t: Horizontal tab (moves the cursor to the next tab stop)
        \r: Carriage return (moves the cursor to the beginning of the current line)
        \b: Backspace (moves the cursor one position back)
        \a: Alert (produces a bell sound)
        \\: Backslash (prints a backslash character)
        \': Single quote (prints a single quote character)
        \": Double quote (prints a double quote character)
    */
    return 0;
}