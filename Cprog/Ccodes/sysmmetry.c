#include<stdio.h>
int main()
{
    int A[10][10],Transpose[10][10];
    int issymetry,i,j,row,col;
    printf("Enter the rows\n");
    scanf("%d",&row);
    printf("Enter the cols\n");
    scanf("%d",&col);
    if(row!=col)
    {
        printf("Matrix is not symmetric\n");
        return 0;
    }
    printf("Enter the elements of matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            Transpose[j][i]=A[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",Transpose[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            A[i][j]=Transpose[i][j];
            issymetry=1;
            break;
        }
    }
    if(issymetry)
    {
        printf("The matrix is symmetry\n");
    }
    else
    {
        printf("The matrix is not symmetry\n");
    }
}
