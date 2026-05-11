#include<stdio.h>
int main()
{
    int n,i,e=0,o=0,arr[100],even[100],odd[100];
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
    printf("Even array\n");
    for(i=0;i<e;i++)
    {
        printf("%d\n",even[i]);
    }
    printf("Odd array\n");
    for(i=0;i<o;i++)
    {
        printf("%d\n",odd[i]);
    }
}
