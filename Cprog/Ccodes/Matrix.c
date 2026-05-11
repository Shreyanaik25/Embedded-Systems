#include<stdio.h>
int main()
{
    int A[10][10],i,j,rows,cols;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Enter the number of columns\n");
    scanf("%d",&cols);
    printf("Enter the elements of Matrix A:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d\t",&A[i][j]);
        }
    }
     printf("Matrix A is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", A[i][j]);  // Print each element with a tab
        }
        printf("\n");  // Move to next row
    }

    return 0;
}

