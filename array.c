#include<stdio.h>
int n,arr[20];
int *p=&n;
void ins_beg(int *n,int *a)
{
	int b;
	printf("enter the element to be inserted : ");
	scanf("%d",&b);
	for(int i=*n;i>=0;i--)
		a[i+1]=a[i];
	a[0]=b;
	*n=*n+1;
}
void ins_end(int *n,int *a)
{
	int b;
	printf("Enter the number to be inserted : ");
	scanf("%d",&b);
	a[*n]=b;
	*n=*n+1;
}
void ins_pos(int *n,int *a)
{
	int b,pos;
	printf("Enter the position to be added : ");
	scanf("%d",&pos);
	printf("Enter the value to be added : ");
	scanf("%d",&b);
	for(int i=*n;i>=pos-1;i--)
		a[i]=a[i-1];
	a[pos-1]=b;
	*n=*n+1;
}
void del_beg(int *n, int *a)
{
	for(int i=0;i<*n;i++)
		a[i]=a[i+1];
	*n=*n-1;
}
void del_end(int *n)
{
	*n=*n-1;
}
void del_pos(int *n,int *a)
{
	int b,pos;
	printf("Enter the position to be deleted : ");
	scanf("%d",&pos);
	for(int i=pos-1;i<*n;i++)
		a[i]=a[i+1];
	*n=*n-1;
}

int main()
{
	int choice;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	do
	{
		printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at position\n4.Delete at beginning\n5.Delete at end\n6.Delete at position\n7.stop\nEnter your choice : ");
		scanf("%d",&choice);
		printf("\n%d\n",choice);
		switch(choice)
		{
			case 1 : 
				ins_beg(&n,arr);
				break;
			case 2 : 
				ins_end(&n,arr);
				break;
			case 3 : 
				ins_pos(&n,arr);
				break;
			case 4 : 
				del_beg(&n,arr);
				break;
			case 5 : 
				del_end(&n);
				break;
			case 6 : 
				del_pos(&n,arr);
				break;
			case 7 : break;
			default : 
				printf("wrong input");
				break;
		}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	}while(choice != 7);
	
	return 0;
}
