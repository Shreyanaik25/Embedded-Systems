#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int rowA,colA,rowB,colB,i,j,k;
    printf("Enter the rows of A\n");
    scanf("%d",&rowA);
    printf("Enter the cols of A\n");
    scanf("%d",&colA);
    printf("Enter the row of B\n");
    scanf("%d",&rowB);
    printf("Enter the col of B\n");
    scanf("%d",&colB);
    if(colA!=rowB)
    {
        printf("Multiplication cant be possible\n");
        return 0;
    }
    printf("Enter the elements of matrix A\n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colA;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of Matrix B\n");
    for(i=0;i<rowB;i++)
    {
        for(j=0;j<colB;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colB;j++)
        {
            C[i][j]=0;
        }
    }
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colB;j++)
        {
            for(k=0;k<colA;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("The multiplication of two matrix is\n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colB;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}
