#include<stdio.h>
int main()
{
    int arr[100][100],i,j,rows,cols,rowsum=0,colsum;
    printf("Enter the rows:");
    scanf("%d",&rows);
    printf("Enter the columns:");
    scanf("%d",&cols);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("In matrix :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rows;i++)
    {
        rowsum=0;
        for(j=0;j<cols;j++)
        {
            rowsum+=arr[i][j];
        }
        printf("Sum of row[%d]:%d\n",i,rowsum);
    }
    for(j=0;j<cols;j++)
    {
        colsum=0;
        for(i=0;i<rows;i++)
        {
            colsum+=arr[i][j];
        }
        printf("Sum of cols[%d]:%d\n",j,colsum);
    }

}
