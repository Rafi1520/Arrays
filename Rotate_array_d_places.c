/*
    Left rotate the array by d places.
    In: arr[] = {1,2,3,4,5,6,7}; d =3;
    out: arr[] = {4,5,6,7,1,2,3};

    below describes 2 methods
    rotateleft2 is the optimal solution
*/


#include <stdio.h>
#include <stdlib.h>
void rotateleft1(int a[], int size, int d)
{
    int *temp = (int*)malloc(d*sizeof(int));
    int i = 0;
    for(i=0;i<d;i++)
        temp[i] = a[i];
    for(i=d;i<size;i++)
        a[i-d] = a[i];
    for(i=d;i<size;i++)
        a[i+1] = temp[i-d];

    /*print the array*/  
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    
}
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

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    rotateleft2(arr,7,3);
    return 0;
}
