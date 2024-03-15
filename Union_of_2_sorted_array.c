#include<stdio.h>
#include<stdlib.h>

typedef struct _node
{
	int data;
	struct _node *next;
}Node;

Node *head = NULL;
Node *tail = NULL;
int stack_size = 0;

Node* newnode(int data)
{
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->next = NULL;
	return temp;
}

void addtostack(int data)
{
	if(!head)
	{
		head = newnode(data);
		tail = head;
	}
	else
	{
		tail->next = newnode(data);
		tail =  tail->next;
	}
	stack_size++;
}

int* unionarray1(int a1[], int a2[], int s1, int s2)
{
    int i =0;
	addtostack(a1[0]);
	for(i=1;i<s1;i++)
	{
		if(tail->data < a1[i])
			addtostack(a1[i]);
	}
	for(i=1;i<s2;i++)
	{
		if(tail->data < a2[i])
			addtostack(a2[i]);
	}
	
	int *union_arr = (int*)malloc(sizeof(int)*stack_size);
	Node *temp = head;
	i=0;
	while(temp)
	{
		union_arr[i++] = temp->data;
		temp = temp->next;
	}
	for(i=0;i<stack_size;i++)
		printf("%d ", union_arr[i]);
}

int main()
{
	int arr1[] = {1,1,2,3,4,5};
	int arr2[] = {2,3,4,4,5,6};
	unionarray1(arr1,arr2,sizeof(arr1)/sizeof(arr1[0]), sizeof(arr2)/sizeof(arr2[0]));
}

