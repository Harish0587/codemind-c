#include<stdio.h>
int main()
{
    int s,n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    int t=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<=s)
        {
            t=t+1;
        }
        else
        {
            t=t+2;
        }
    }
    printf("%d",t);
}