#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter row: ");
    scanf("%d",&row);
    int val;
    for(i=1;i<=row;i++)
    {
        val=1;
        for(j=1;j<=i;j++)
        {
           printf("%d",val);
           val= val * (i - j) / j;
        }
        
        printf("\n");
    }
}