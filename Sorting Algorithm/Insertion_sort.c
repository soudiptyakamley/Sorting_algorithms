#include<stdio.h>
void insertionsort(int [],int);
void insertionsort(int a[], int n)
{
	int i,j;
	int k;
	for(i=1;i<n;i++)
	{
		k=a[i];
//		j=i-1;
		for (j=i-1 ; j >= 0 && a[j]>k; j--)
        {
        	a[j + 1] = a[j];
        }
		a[j+1]=k;
	}
}
void printArray(int [],int);
void printArray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}

int main()
{
	int a[100],i;
	int n;
	printf("Enter the no of elements::");
	scanf("%d",&n);
	printf("Enter the array elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	printArray(a,n);
	return 0;
}
