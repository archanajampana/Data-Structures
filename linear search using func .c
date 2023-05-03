#include<stdio.h>
int linearsearch(int *a,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n,i,a[100],res,se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	res=linearsearch(a,n,se);
	printf("%d",res);
}
