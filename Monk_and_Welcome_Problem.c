#include<stdio.h>
int main()
{
    int a[100],b[100],i,n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       scanf("%d",&b[i]); 
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i]+b[i];
    printf("%d ",s);
    s=0;
    }
}