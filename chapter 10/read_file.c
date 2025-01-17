#include <stdio.h>
#include <string.h>

int main(){
    
    FILE *ptr;
    char fname[16];
    printf("Enter File name : ");
    scanf("%s",&fname);
    printf("File : ");
    ptr = fopen(fname,"r");
    char file[100];
    if(ptr != NULL)
    {
        printf("Exists! \n");
        printf("Reading File Name : %s \n",fname);

        fgets(file, sizeof(file), ptr);
        printf("%s",file);
    }
    else{
        printf("Does'nt Exist!\n");
    }
    fclose(ptr);
    return 0;
}