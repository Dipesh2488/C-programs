#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],s[2][2],i, j;
	printf("enter the digits for array 1\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
	
	printf("enter the digits for array 2\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&b[i][j]);
	}
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		s[i][j]=a[i][j]+b[i][j];
	}
	printf("sum of the entered digits of matrix is:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d\t",s[i][j]);
		printf("\n");
	}
	
	return 0;
	
}
