#include<stdio.h>
void Bubblesort(int[],int);
void Bubblesort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	   	
	}
	for(j=0;j<=n-1;j++)
	{
		printf("%d ",a[j]);
	}
}
int main()
{
	int i,j,n;
	int a[100];
	printf("Enter no of array elements::");
	scanf("%d",&n);
	printf("Enter array elements::");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	Bubblesort(a, n);
	return 0;
}
