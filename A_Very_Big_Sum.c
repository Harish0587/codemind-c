#include<stdio.h>
int main()
{
    int n,i;
    long int c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c+arr[i];
    }
    printf("%lld",c);
}