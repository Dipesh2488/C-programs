
#include<stdio.h>
int main()
{
	int i,a[15], sum=0;
	printf("enter 5 numbers\n");
	for(int i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
	sum=sum+a[i]; 
}
printf("sum of entered number is %d",sum);
int avg=sum/5;

return 0;

