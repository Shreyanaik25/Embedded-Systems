#include<stdio.h>
int main()
{
    int A[10][10],Transpose[10][10];
    int row,cols,i,j;
    printf("Enter the rows\n");
    scanf("%d",&row);
    printf("Enter the cols\n");
    scanf("%d",&cols);
    printf("Enter the elements of matrix A\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            Transpose[j][i]=A[i][j];
        }
    }
    printf("Transpose of A\n");
    {
        for(i=0;i<cols;i++)
        {
            for(j=0;j<row;j++)
            {
                printf("%d\t",Transpose[i][j]);
            }
            printf("\n");

        }
    }
}
