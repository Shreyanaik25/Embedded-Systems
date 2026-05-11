#include<stdio.h>
int main()
{
    int A[10][10],B[10][10];
    int rowA,rowB,colsA,colsB,i,j;
    printf("Enter the rowA\n");
    scanf("%d",&rowA);
    printf("Enter the colums A\n");
    scanf("%d",&colsA);
    printf("Enter the Rows of B\n");
    scanf("%d",&rowB);
    printf("Enter the columns of B\n");
    scanf("%d",&colsB);
    printf("Enter the elements of matrix A\n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colsA;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of matrix B\n");
    for(i=0;i<rowB;i++)
    {
        for(j=0;j<colsB;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("Matrix A\n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colsA;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B\n");
    for(i=0;i<rowB;i++)
    {
        for(j=0;j<colsB;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
