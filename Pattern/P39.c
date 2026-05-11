#include<stdio.h>
int main()
{
    int i,row,j;
    printf("Enter row: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        int val=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",val);
            val=1-val;
        }
        printf("\n");
    }
}