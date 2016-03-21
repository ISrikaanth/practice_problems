/*Find the duplicate numbers in an array*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void findduplicates(int *a,int n);
int main()
{
	int *a,i,n,r;
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	findduplicates(a,n);
	return 0;
}
void findduplicates(int *a,int n)
{
	int i,max,*b;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		  max=a[i];
	}
	b=(int *)malloc(max*sizeof(int));
	for(i=0;i<=max;i++)
		b[i]=0;
	for(i=0;i<n;i++)
		b[a[i]]=b[a[i]]+1;
	for(i=0;i<=max;i++)
	{
		if(b[i]>1)
		  printf("%d\n",i);
	}
}
