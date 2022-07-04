#include<stdio.h>
int main()
{
    int i,j,n,arr[100],s=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0 && arr[i]%2!=0)
        {
            c=c+1;
        }
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]%2!=0)
        {
            s=s+1;
        }
    }
    if(c==s)
    {
        printf("True");
       
    }
    else
    {
        printf("False");
    }
}