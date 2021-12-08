#include<stdio.h>
int n,arr[20];
int *p=&n;
void ins_beg(int n,int *a)
{
	int b;
	printf("enter the element to be inserted : ");
	scanf("%d",&b);
	for(int i=n;i>=0;i--)
		a[i+1]=a[i];
	a[0]=b;
}
void ins_end(int *n,int *a)
{
	int b;
	printf("Enter the number to be inserted : ");
	scanf("%d",&b);
	a[*n]=b;
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
int main()
{
	
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	del_end(&n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
