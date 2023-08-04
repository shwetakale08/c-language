#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("array","r");
	fp2=fopen("Array1","w");
	if(fp1==NULL)
	{
		printf("\nfile not found");
		exit(0);
		
	}
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	printf("\nfile copy successfully");

}

