#include <stdio.h>

int main(){
    
    FILE *ptr;
    int n;
    char str[64];
    ptr = fopen("tables.txt","w");
    printf("Enter the Number : ");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"%2d x %2d = %2d\n",n,i,n*i);
    }
    // fprintf(ptr,"%s",str);
    fclose(ptr);
    return 0;
}