/*The below code considered only +ve elements in the array, if there are -ve elements in the array take  sec_largest = INT_MIN*/

#include <stdio.h>

int findlargeelement(int a[],int size)
{
    int largest = a[0];
    int sec_largest = a[0];
    int i = 0;
    for(i=1;i<size;i++)
    {
        if(a[i]>largest)
        {
            sec_largest = largest;
            largest = a[i];
        }
        else if(a[i]<largest && a[i]>sec_largest)
            sec_largest = a[i];
    }
    return sec_largest;
}

int main()
{
    int arr[] = {3,2,1,5,2,7,9,4,3,8,9};
    
    printf("largest element: %d\n",findlargeelement(arr,11));
    return 0;
}
