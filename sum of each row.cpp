#include<stdio.h>

int main()
 {
    int a[3][3],i,j,sum;
    
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i=0; i<3; i++) 
	{
        for (j=0; j<3; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<3; i++) 
	{
        sum=0; 
        for (j=0; j<3; j++) 
		{
            sum=sum+a[i][j];
        }
        printf("Sum of row %d is:\t %d\n", i+1, sum);
    }
    
    return 0;
}

