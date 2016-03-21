/* Code to find the greater of two strings*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int check_greater(char *s1,char *s2);
int main()
{
	char *s1,*s2,r;
	s1=(char *)malloc(50*sizeof(char));
	s2=(char *)malloc(50*sizeof(char));
	scanf("%s %s",s1,s2);
	r=check_greater(s1,s2);
	if(r==1)
       printf("%s is greater",s1);
	else if(r==0)
	   printf("%s is greater",s2);
	else
	   printf("%s and %s are equal",s1,s2);
	return 0;
}
int check_greater(char *s1,char *s2)
{
	int i=0;
	if(strlen(s1)<strlen(s2))
	  return 0;
	else if(strlen(s1)>strlen(s2))
	  return 1;
	else
	{
	   while(s1[i]!='\0')
	   {
	   	    if(s1[i]>s2[i])
	   	        return 1;
	   	    else if(s1[i]<s2[i])
	   	        return 0;
	   	    else
	   	        i++;
	   }
	   if(s1[i]=='\0')
	     return -1;
	 }
}

