#include<stdio.h>
int main()
{
    int arr[100],reversed[100],n,i;
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("the %d element are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         reversed[i]=arr[n-1-i];
         break;
    }
    if(reversed[i]==arr[i])
    {
        printf("Array is palindrome\n");
    }
    else
    {
        printf("Array is not pallindrome\n");
    }
}
