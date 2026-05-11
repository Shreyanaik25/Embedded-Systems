#include<stdio.h>
int main()
{
    int arr[100],n,i,search,found=0;
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("%d found at index arr[%d]\n",search,i);
            found=1;
        }
    }
    if(found=0)
    {
        printf("%d not found \n",search);
    }
}
