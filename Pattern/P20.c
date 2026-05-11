#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter row: ");
    scanf("%d",&row);
    for(i=row;i>=1;i--)
    {
        char ch='a'+i-1;
        for(j=1;j<=i;j++)
        {
            printf("%c  ",ch--);
        }
        printf("\n");
    }
}