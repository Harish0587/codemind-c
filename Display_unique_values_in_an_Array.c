#include<stdio.h>
int count(int *arr,int val,int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            c+=1;
        }
    }
    return c;
}
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int f=0;
    for(i=0;i<n;i++)
    {
        if(count(arr,arr[i],n)==1)
        {
            f=1;
            printf("%d ",arr[i]);
        }
    }
    if(f==0)
    {
        printf("-1");
    }
    
}