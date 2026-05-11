#include<stdio.h>
int main()
{
     int n;
    printf("Enter the number of elments:");
    scanf("%d",&n);
    int i,arr[n],start,end,isPalindrome = 1;
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    start=0;
    end=n-1;
    while(start<end)
    {
        if(arr[start]!=arr[end])
        {
            isPalindrome=0;
            break;
        }
        else
        {
            start++;
            end--;
        }
    }
    if(isPalindrome)
        printf("Palindrome Array \n");
    else
        printf("Not a Palindrome \n");

    return 0;
}
