/*This program is used for removing the duplcate elements in the sorted array
*/
#include <stdio.h>

int remdupsfromsortedarray(int a[],int size)
{
    int i = 0, j = 0;
    for(i=0;i<size;i++)
    {
        if(a[i] != a[i+1])
            a[j++] = a[i];
    }
    /*for(int i =0;i<j;i++)
        printf("%d ",a[i]);*/
    return (j);
}

int main()
{
    int arr[] = {1,1,2,2,2,3,3};
    int j = remdupsfromsortedarray(arr,7);
    printf("after removing the duplicates: ");
    for(int i =0;i<j;i++)
        printf("%d ",arr[i]);
    return 0;
}
