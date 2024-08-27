#include<stdio.h>
void selectionsort(int[],int);
void selectionsort(int a[],int n)
{
	int i,j,min,t;
	for(i=0;i<=n-1;i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			
		}
		if(min!=i)
		{
			t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
		
	}
	for(j=0;j<=n-1;j++)
	{
		printf("%d ",a[j]);
	}
	
}
int main()
{
	int i,n,a[100];
	printf("Enter the no of elements::");
	scanf("%d",&n);
	printf("Enter array elements::");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	selectionsort(a,n);
	return 0;
}
