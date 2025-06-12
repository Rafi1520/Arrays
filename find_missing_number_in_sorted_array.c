/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
    int a[] = {1,1,2,2,3,3,4,4,5};
    int num = findnumonce(a,sizeof(a)/sizeof(a[0]));
    printf("Once number: %d\n",num);
    int b[] = {1,2,3,5,6};
    num = findmissnum(b,sizeof(b)/sizeof(b[0]));
    printf("Miss number: %d\n",num);
    return 0;
}
