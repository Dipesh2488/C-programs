
#include<stdio.h>
int main()
{
	int i,a[15], g=0;
	printf("enter 5 numbers\n");
	for(int i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
	if (a[i]>g)
	{
		g=a[i];
		
	}
}

printf("max number is %d\n",g);

int min=a[i];
for(i=0;i<5;i++)
{
	if (a[i]<min)
	{
		min=a[i];
		
	}
}

printf("min number is %d",min);


return 0;
}

