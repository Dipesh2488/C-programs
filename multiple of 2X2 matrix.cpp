#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],m[2][2]={0},i, j,k;
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
		for(k=0;k<2;k++)
		m[i][j]+=a[i][k]*b[k][j];
	}
	printf("multiple of the entered digits of matrix is:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d\t",m[i][j]);
		printf("\n");
	}
	
	return 0;
	
}
