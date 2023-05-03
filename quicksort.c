#include<stdio.h>
void swap(int *a,int i,int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int partition(int *a,int l,int h)
{
	int p,i,j,temp;
	p=h;
	for(i=l,j=l;i<p;i++)
	{
		if(a[i]<a[p])
		{
			swap(a,i,j);
		    j++;	
		}

	}
	
	swap(a,i,j);
	return j;
	}
void quicksort(int *a,int l,int h)
{
	if(l<h)
	{
		int par;
		par=partition(a,l,h);
		quicksort(a,l,par-1);
		quicksort(a,par+1,h);
	}
	
}

int main()
{
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);  // func call
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
