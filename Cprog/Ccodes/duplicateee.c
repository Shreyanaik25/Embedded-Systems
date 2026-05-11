#include<stdio.h>
int main()
{
    int arr[100],i,j,n;
    printf("Enter the element:");
    scanf("%d",&n);
    printf("The %d elemets are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d\n",arr[i]);
                break;
            }
        }
    }
}
