/*Find the common elements in two arrays*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void commonelements(int *a,int *b,int m,int n);
int main()
{
	int *a,*b,i,m,n;
	scanf("%d",&m);
	a=(int *)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	  scanf("%d",&a[i]);
	scanf("%d",&n);
	b=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	  scanf("%d",&b[i]);
	commonelements(a,b,m,n);
	return 0;
}
void commonelements(int *a,int *b,int m,int n)
{
	int i,j,flag=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
		    {
		    	flag=1;
		    	b[j]=-1;
			}
		}
		if(flag==1)
			printf("%d\n",a[i]);
		flag=0;
	}
}
