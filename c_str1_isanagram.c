/* Code to check if two strings are anagrams or not*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int check_anagrams(char *s1,char *s2);
int main()
{
	char *s1,*s2,r;
	s1=(char *)malloc(50*sizeof(char));
	s2=(char *)malloc(50*sizeof(char));
	scanf("%s %s",s1,s2);
	r=check_anagrams(s1,s2);
	if(r==1)
       printf("anagrams");
	else
	   printf("not anagrams");
	return 0;
}
int check_anagrams(char *s1,char *s2)
{
	int *a,i=0;
	a=(int *)malloc(26*sizeof(int));
	for(i=0;i<26;i++)
	   a[i]=0;
    i=0;
	while(s1[i]!='\0')
	{
		a[s1[i]-97]++;
		i++;		
	}
	i=0;
    while(s2[i]!='\0')
	{
		a[s2[i]-97]--;
		i++;		
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		   break;
	}
    if(i==26)
      return 1;
    else
      return 0;
}

