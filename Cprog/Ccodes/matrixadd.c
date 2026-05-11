#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,rows,cols;
    printf("Enter the rows\n");
    scanf("%d",&rows);
    printf("Enter the columns\n");
    scanf("%d",&cols);
    printf("Enter the Elements of matrix A\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of Matrix B\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("Sum of two arrays\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

}
