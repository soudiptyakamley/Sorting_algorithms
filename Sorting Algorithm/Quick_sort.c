#include<stdio.h>
void printArray(int [],int);
void quicksort(int [],int, int);
int partition(int [],int ,int);
int partition(int a[],int low,int up)
{
	int i,j,pivot;
	int t;
	i=low+1;
	j=up;
	pivot=a[low];
	while(i<=j)
	{
		while(a[i]<pivot)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			i++;
			j--;
		}
	}
	a[low]=a[j];
	a[j]=pivot;
	return j;
}

void quicksort(int a[],int low, int up)
{
	int j;
	if(low>=up)
	{
		return;
	}
	j=partition(a,low,up);
	quicksort(a,low,j-1);
	quicksort(a,j+1,up);
}

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
	quicksort(a,0,n-1);
	printArray(a,n);
	return 0;
}
