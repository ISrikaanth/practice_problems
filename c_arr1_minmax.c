/*code to find min and max elements of an array*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int * minmax(int *a,int *b,int n);
int main()
{
	int *a,*b,n,i;
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(2*sizeof(int));
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	b=minmax(a,b,n);
	for(i=0;i<2;i++)
	   printf("%d\n",b[i]);
	return 0;
}
int * minmax(int *a,int *b,int n)
{
	int i,min,max;
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		  max=a[i];
		if(a[i]<min)
		  min=a[i];
	}
	b[0]=min;
	b[1]=max;
	return b;
}
