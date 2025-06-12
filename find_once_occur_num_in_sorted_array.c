/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int findnumonce(int *a, int size)
{
    int i = 0;
    int xor = 0;
    for(i=0;i<size;i++)
        xor = xor^a[i];
    return xor;
}

int main()
{
    int a[] = {1,1,2,2,3,3,4,4,5};
    int num = findnumonce(a,sizeof(a)/sizeof(a[0]));
    printf("Once number: %d\n",num);
    return 0;
}
