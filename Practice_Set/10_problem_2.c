#include <stdio.h>

int main(){
    
    FILE *ptr1,*ptr2;
    char str[16],ch;
    printf("Enter File Name to Copy From : ");
    scanf("%s",&str);
    ptr1 = fopen(str,"r");
    ptr2 = fopen("copied.txt","w");
    printf("File : ");
    if(ptr1 != NULL){
        printf("Exist!\n");
        while (1)
        {
            ch = fgetc(ptr1);
            if(ch == EOF){
                printf("File Transfer Completed.\n");
                break;
            }
            else{
                fputc(ch,ptr2);
            }
            
        }
    }
    else{
        printf("Does'nt Exist!\n");
    }

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}