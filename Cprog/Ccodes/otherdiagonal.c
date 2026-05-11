#include<stdio.h>
int main()
{
    int arr[100][100],i,j,rows,cols,sum,sumrows=0;
    printf("Enter rows & cols:");
    scanf("%d %d",&rows,&cols);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Diagonals from right to left:\n");
    for(i=0;i<rows;i++)
    {
                printf("%d\n",arr[i][j-1-i]);
                sumrows+=arr[i][j-1-i];
    }
    printf("Sum of right to left diagonals are:%d\n",sumrows);
    printf("Diagonals from left to right:\n");
    for(i=0;i<rows;i++)
    {
        sumrows=0;
        for(j=0;j<cols;j++)
        {
            if(i==j)
            {
                printf("%d\n",arr[i][j]);
                sumrows+=arr[i][j];
            }
        }

    }
    printf("Sum of left to right diagonals are:%d\n",sumrows);

}
