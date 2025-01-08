#include <stdio.h>

// void printArray(int[], int); //For Array ProtoType | Declaration
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++){
        printf("%3d ", a[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++){
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    // printArray(arr,n);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};

    printf("Orignal Array  : ");
        printArray(arr, 6);
        reverse(arr, 6);
    printf("Reversed Array : ");
        printArray(arr, 6);
    return 0;
}