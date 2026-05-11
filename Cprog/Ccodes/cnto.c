/*#include<stdio.h>
int main()
{
    int arr[100],n,i,even=0,odd=0;
    printf("Enter the  number of element s\n");
    scanf("%d",&n);
    printf("The %d elements are :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Number of even numbers are %d\n",even);
    printf("Number of odd numbers are %d\n",odd);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d is Even\n",arr[i]);
        }
        else
        {
            printf("%d is Odd\n",arr[i]);
        }
    }
}
