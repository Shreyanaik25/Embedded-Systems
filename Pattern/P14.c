#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter row: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        char ch='a';
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
}