
#include <stdio.h>
int findmissnum(int *a, int size)
{
    int i = 0;
    int xor1 = 0;
    int xor2 = 0;
    for(i=0;i<size;i++)
    {
        xor2 = xor2^(i+1);
        xor1 = xor1^a[i];
    }
    xor2 = xor2^(size+1);
    return xor2^xor1;
}

int main()
{
    int b[] = {1,2,3,5,6};
    num = findmissnum(b,sizeof(b)/sizeof(b[0]));
    printf("Miss number: %d\n",num);
    return 0;
}
