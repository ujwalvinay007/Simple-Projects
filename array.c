#include<stdio.h>
void ins_beg(int n,int *a)
{
	int b,arr[20];
	printf("enter the element to be inserted : ");
	scanf("%d",&b);
	for(int i=n;i>=0;i--)
		a[i+1]=a[i];
	a[0]=b;
}
int main()
{
	int n,arr[20];
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	ins_beg(n,arr);
	for(int i=0;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
