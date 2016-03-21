/* Code to convert string to integer*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
long int str_to_int(char *s);
int main()
{
	long int n;
	char *s;
	s=(char *)malloc(50*sizeof(char));
	scanf("%s",s);
	n=str_to_int(s);
	printf("%ld",n);
	return 0;
}
long int str_to_int(char *s)
{
	int i=0,n=0,flag=0;
	if(s[i]=='-')
	{
		flag=1;
		i++;
	}
	while(s[i]!='\0')
	{
		n=(n*10)+(s[i]-'0');
		i++;		
	}
	if(flag==0)
       return n;
    else
       return -n;
}

