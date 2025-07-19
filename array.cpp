/*
#include<stdio.h>
int main()
{
	int a[3]={2,5,10};
	for(int i=1;i<=2;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int i,a[15];
	printf("enter 10 numbers\n");
	for(int i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}
	printf("Entered numbers is:\n");
for(i=0;i<10;i++)
{
	printf("%d\n",a[i]);
}
return 0;
}
