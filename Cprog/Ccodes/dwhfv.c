#include<stdio.h>
int main()
{
    int n;
    printf("Enter the elements:\n");
    scanf("%d",&n);
    int arr[n],i,posCount=0,negCount=0;
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {

            posCount++;
            printf("Positive numbers:%d\n",arr[i]);
        }
        if(arr[i]<0)
        {

            negCount++;
            printf("Negative numbers:%d\n",arr[i]);
        }
    }
    printf("\nTotal positive numbers: %d\n", posCount);
    printf("Total negative numbers: %d\n", negCount);

}
