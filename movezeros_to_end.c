/*This program is used to move all zero elements in the array to end of the array
2 methods is used, movezerostoend2 is the optimal solution 
*/
void movezerostoend1(int a[], int size)
{
    int *temp = (int*)malloc(size*sizeof(int));
    int i = 0, j = 0;
    for(i=0,j=0;i<size;i++)
    {
        if(a[i] != 0)
            temp[j++] = a[i];
    }
    for(i=0;i<size;i++)
    {
        if(temp[i] != 0)
            a[i] = temp[i];
        else
            a[i] = 0;
    }
    /*print the array*/  
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
        
}
void myswap(int *a, int *b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
void movezerostoend2(int a[], int size)
{
    int i = 0, j = -1;
    
    for(i=0;i<size;i++)
    {
        if(a[i] == 0)
        {
            j = i;
            break;
        }
    }
    
    for(i = j+1;i<size;i++)
    {
        if(a[i] != 0){
            myswap(&a[i],&a[j]);
            j++;
        }
    }
    
    /*print the array*/  
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
}

int main()
{
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    movezerostoend2(arr,10);
    return 0;
}
