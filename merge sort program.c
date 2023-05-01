#include<stdio.h>
void merge(int *a,int l,int h,int m)
{
	int res[h-l+1],i=l,j=m+1,k=0;
	while(i<=m && j<=h)
	{
		if(a[i]>a[j])
		{
			res[k++]=a[j++];
		}
		else
		{
			res[k++]=a[i++];
		}
	}
	while(i<=m)
	{
		res[k++]=a[i++];
	}
	while(j<=h)
	{
		res[k++]=a[j++];
	}
	k=0;
	for(i=l;i<=h;i++)
	{
		a[i]=res[k++];
	}
}
//#include<stdio.h>
void merge_sort(int *a,int n)
{
int i,l,h,m,p;
for(p=2;p<=n;p=p*2)
{
	for(i=0;i+p<=n;i=i+p)
	{
	l=i;
	h=p+i-1;
	m=(l+h)/2;
	merge(a,l,h,m);	
	}
 }
 if(p/2<n && n%2==0)  //case 1(when n=even)
 {
 m=p/2-1;
 l=0;
 h=n-1;
 merge(a,l,h,m);
}
else   //case 2 (when n=odd)
{
	m=n-2;
	l=p/2;
	h=n-1;
	merge(a,l,h,m);
	merge(a,0,n-1,p/2-1);
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
	merge_sort(a,n); 
	 for (i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
    }

	return 0;
	
}
//89 12 34 17 1
