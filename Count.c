#include<stdio.h>
int main()
{
    int arr[100],i,n,o=0,e=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            o++;
        }
        else
        {
            e++;
        }
    }
    printf("%d %d",o,e);
}