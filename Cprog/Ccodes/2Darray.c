#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **arr,rows,cols,i,n,j;
    printf("Enter the rows and cols:");
    scanf("%d %d",&rows,&cols);
    arr=(int **)malloc(rows * sizeof(int*));
    if(arr==NULL)
    {
        printf("Memeory allocation failed");
        return 1;
    }
    for(i=0;i<rows;i++)
    {
        arr[i]=(int *)malloc(cols * sizeof(int));
        if(arr==NULL)
        {
            printf("Memory allocation failed");
            return 1;
        }
    }
    printf("Enter the elements:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:\n");
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
        free(arr[i]);
    }
    free(arr);
    return 0;
}
