#include<stdio.h>
int main()
{
    int n;
    printf("Enter the how many elements you want to print:");
    scanf("%d",&n);
    int arr[n];
    int i;
    int key,found=0;
     printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter the element you want to search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found=1;
            break;
        }
    }
        if(found)
             {
        printf("Key %d found at index %d.\n", key, i);
    } else {
        printf("Key %d not found in the array.\n", key);
    }
        }


