#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter row: ");
    scanf("%d",&row);
    int count=1;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",count);
        }
        printf("\n");
    }
}