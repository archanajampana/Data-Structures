#include<stdio.h>
int binarysearch_rec(int *a,int l,int h,int se)
{
	if(l>h)
	{
		return -1;
	}
	int m;
	m=(l+h)/2;
	while(l<=h)
	{
		if(a[m]==se)
		{
			return m;
		}
		else if(a[m]>se)
		{
			h=m-1;
		}
		else if(a[m]<se)
		{
			l=m+1;
		}
	}
	return binarysearch_rec(a,l,h,se);
}
int main()
{
	int i,n,a[100],se,res,l,h;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	res=binarysearch_rec(a,l,h,se);
	printf("%d",res);
}
