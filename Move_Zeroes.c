#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,k=0,l[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            l[k]=a[i];
            k++;
        }
        else
        {
            c++;
        }
    }
    while(c)
    {
        l[k++]=0;
        c--;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",l[i]);
    }
}