#include<stdio.h>
int main()
{
    int arr[3]={5,10,15};
    int *p=arr;
    printf("%d\n",*p++); //use value 5 then increment
    printf("%d\n",*p); //Moves pointer to next element arr[1]
    printf("%d\n",(*p)++); // value uses first 10 then increments
    printf("%d\n",*p); //Now the value has become 11
}