#include <stdio.h>

typedef struct Date{
    int dd;
    int mm;
    int yyyy;

} DT;

int compare (DT d1, DT d2){
    if (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd){
        return 0;
    }
    else if(d1.yyyy > d2.yyyy || d1.mm > d2.mm || d1.dd > d2.dd){
        return 1;
    }
    else if(d1.yyyy < d2.yyyy || d1.mm < d2.mm || d1.dd < d2.dd){
        return -1;
    }
    
}

int main(){
    
    DT d1 = {11,4,2012};
    DT d2 = {11,4,2012};
    printf("Compare : %d\n",compare(d1,d2));
    return 0;
}