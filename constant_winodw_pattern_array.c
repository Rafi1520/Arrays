/* This program is used to calucalte the maximum sum of constant window(here k = 4) of an array*/
#include <stdio.h>
#include <string.h>

int cus_max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int maximumsum(int *a, int n, int k)
{
    int l =0, r = 0, sum = 0, maxsum = 0;
    r = k; //point the r to the right of the array at distance of k elements
    for(l =0; l<r;l++)
        sum = sum+a[l];
    printf("1st sum:%d and n val:%d\n",sum,n);
    l = 0; //reset l to zero , to poing to the starting of the array;
    r = k-1; //r is pointing to the location of k-1 in the array.
    while(r<n)
    {
        sum = sum - a[l];
        printf("next sum:%d and l = %d\n",sum,l);
        l++;
        r++; //sliding the window positon to next point
        sum = sum + a[r];
        maxsum = cus_max(maxsum,sum);
        printf("maxsum loop1:%d and r = %d \n", maxsum,r);
    }
    return maxsum;
}
int main()
{
    int arr[] = {-1,2,3,3,4,5,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int maxsum = maximumsum(arr,size,k);
    printf("maximum summ: %d\n",maxsum);
    return 0;
}
