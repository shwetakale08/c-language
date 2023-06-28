#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int v=0,c=0,i;
	printf("enter string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
	     	v++;
	     }
		else
		{ 
		    c++;
		}
	    }
			printf("number of vowels are:%d\n",v);
			printf("number of consonants are:%d\n",c);
		
}
