#include<stdio.h>
int main()
{
    int arr[100],unique[100],i,j,k=0,isduplicate,n;
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("the %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        isduplicate=0;
        for(j=0;j<k;j++)
        {
            if(arr[i]==unique[j])
            {
                isduplicate=1;
                break;
            }
        }
        if(isduplicate==0)
        {
            unique[k]=arr[i];
            k++;
        }
    }
    printf("Array after removing duplicates\n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",unique[i]);
    }
}
