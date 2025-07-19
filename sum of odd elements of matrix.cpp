#include <stdio.h>

int main() {
    int matrix[2][2],i,j;
    int sum = 0;

    printf("Enter the elements of the 2x2 matrix:\n");
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            if (matrix[i][j] % 2 != 0) 
			{ 
                sum+= matrix[i][j];
            }
        }
    }

    printf("The sum of odd elements in the matrix is: %d\n", sum);

    return 0;
}

