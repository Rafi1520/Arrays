#include<stdio.h>

void reverse(int a[],int start, int end)
{
    int temp = 0;
    while(start < end)
    {
        temp = a[start];
        a[start++] = a[end];
        a[end--] = temp;
    }
}
void rotateleft2(int a[], int size, int d)
{
    int i = 0;
    reverse(a,0,d-1);
    for(i=0;i<size;i++)
        printf("%d ",a[i]);printf("\n");
    reverse(a,d,size-1);
    for(i=0;i<size;i++)
        printf("%d ",a[i]);printf("\n");
    reverse(a,0,size-1);
    /*print the array*/  
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    
}
void rotateright2(int a[], int size, int d)
{
    int i = 0;
    reverse(a,0,d);
    for(i=0;i<size;i++)
        printf("%d ",a[i]);printf("\n");
    reverse(a,d+1,size-1);
    for(i=0;i<size;i++)
        printf("%d ",a[i]);printf("\n");
    reverse(a,0,size-1);
    /*print the array*/  
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int i = 0;
    printf("Rotate left case\n");
    rotateleft2(arr,7,3);
    for(i=0;i<7;i++)
        arr[i] = i+1;
    printf("\n---------------\n");
    printf("Rotate right case\n");
    rotateright2(arr,7,3);
    return 0;
}
