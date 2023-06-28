 #include<stdio.h>
 int main()
{
	int a[10][10],m,n,trace=0,i,j;
	printf("enter the order of matrix...:");
	scanf("%d",&n);
	printf("enter the elements of matrix...:");
	for( i=0;i<n;i++)
	{
		for( j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for( i=0;i<n;i++)
	{
		for( j=0;j<n;j++)
		{
				if(i==j)
	          {
	          	trace=trace+a[i][j];
			   
			   } 
			   
	
		}
	}
	for( i=0;i<n;i++)
	{
		for( j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
	    }
			printf("\n");
	}
	
	printf("trace of mstrix is...:%d\t",trace);
	return 0;

}
