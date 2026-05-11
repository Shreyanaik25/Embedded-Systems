#include<stdio.h>
int main()
{
    int n;
    printf("enter number of element:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements:\n",n);
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    printf("Printing arrays:\n");
      for(int i=0;i<n;i++)
      {
          printf("%d\n",arr[i]);
      }
}
