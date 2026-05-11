#include<stdio.h>
int main()
{
    int arr[100],n,i,even[100],odd[100],e=0,o=0;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[e]=arr[i];
            e++;
        }
        else
        {
            odd[o]=arr[i];
            o++;
        }
    }
    printf("Array of an even elements\n");
    for(i=0;i<e;i++)
    {
        printf("%d\n",even[i]);
    }
    printf("Array of an odd elements\n");
    for(i=0;i<o;i++)
    {
        printf("%d\n",odd[i]);
    }
}
