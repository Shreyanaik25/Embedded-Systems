#include<stdio.h>
int main()
{
    int arr[3];
    printf("Enter the elements\n");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("You Entered\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
