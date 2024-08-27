#include<stdio.h>
void modifiedBubblesort(int[],int);
void modifiedBubblesort(int a[],int n)
{
	int i,j,flag,t;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag=1;
			}
			
		}
		if(flag==0)
		{
			break;
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
	modifiedBubblesort(a,n);
	return 0;
}
