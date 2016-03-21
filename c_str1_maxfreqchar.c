/* Code to find the character with Maximum frequency*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
char maxfreq_char(char *s);
int main()
{
	char *s,r;
	s=(char *)malloc(50*sizeof(char));
	scanf("%s",s);
	r=maxfreq_char(s);
	printf("%c",r);
	return 0;
}
char maxfreq_char(char *s)
{
	int *a,i=0,pos=0;
	a=(int *)malloc(26*sizeof(int));
	for(i=0;i<25;i++)
	   a[i]=0;
    i=0;
	while(s[i]!='\0')
	{
		a[s[i]-97]++;
		i++;		
	}
	for(i=1;i<25;i++)
	{
		if(a[i]>a[pos])
		  pos=i;
    }
    return pos+97;
}

