#include<stdio.h>
int main()
{
    int arr[100],even[100],odd[100],e=0,o=0,i,n;
    printf("Enter elements:");
    scanf("%d",&n);
    printf("%d elements\n",n);
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
    printf("Only even elements arry\n");
    for(i=0;i<e;i++)
    {
        printf("%d\n",even[i]);
    }
    printf("Only odd elements array\n");
    for(i=0;i<o;i++)
    {
        printf("%d\n",odd[i]);
    }
}
