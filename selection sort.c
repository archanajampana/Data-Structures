#include<stdio.h>
void selectionsort(int *arr,int n)
{
	int i,p,max,maxindex;
	for(p=0;p<n-1;p++)//
	{
		max=arr[0];
		maxindex=0;
		for(i=0;i<n-p;i++)
		{
	if(arr[i]>max)
	{
		max=arr[i];
		maxindex=i;
	}
		}
   int temp=arr[maxindex];//swaping two values
   arr[maxindex]=arr[i-1];
   arr[i-1]=temp;	
	}
}
int main()
{
int n,i,arr[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
selectionsort(arr,n);//fun call
for(i=0;i<n;i++)
{
	printf("%d\t",arr[i]);
}  
	
}
		
