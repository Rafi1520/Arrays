/*The solution for this problem can be found in brut force and optimal way
In brutt force menthod first we will sort the array then we take a[n-1] element as the largest. but it takes NLOGN time complexity
We can optimize the solution with below logic to O(n)*/

#include <stdio.h>
int findlargeelement(int a[],int size)
{
    int largest = a[0];
    int i = 0;
    for(i=1;i<size;i++)
    {
        if(a[i]>largest)
            largest = a[i];
    }
    return largest;
}

int main()
{
    int arr[] = {3,2,1,5,2,7,9,4,3};
    printf("largest element:%d\n",findlargeelement(arr,9));
    return 0;
}
