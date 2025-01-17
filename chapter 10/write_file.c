#include <stdio.h>

int main(){
    
    FILE *ptr;
    char fname[16];
    printf("Enter File name : ");
    scanf("%s",&fname);
    printf("File : ");
    ptr = fopen(fname,"w");
    char file[100];
    if(ptr != NULL){
        printf("Exists! \n");
        printf("Writing File : \"%s\" \n",fname);
        printf("Enter Text : ");
        getchar();
        fgets(file,100,stdin);
        
        fprintf(ptr,"%s",file);
    }
    else{
        printf("Does'nt Exist!\n");
    }
    fclose(ptr);
    return 0;
}