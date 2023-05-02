#include<stdio.h>
void insertionsort(int *a,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]<temp)
			{
				a[j+1]=temp;
				break;
			}
			else                             // 5 4 3 2 1
			{
				a[j+1]=a[j];
				//j--;
			}
		
	}
	if(j==-1)
		a[0]=temp;	
     	
	}
	
}
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
