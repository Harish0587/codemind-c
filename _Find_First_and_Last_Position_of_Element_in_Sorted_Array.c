#include<stdio.h>
int main()
{
    int n,arr[100],a,i,j=0,l[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            l[j]=i;
            j++;
        }
    }
    if(j==0)
    {
        printf("-1 -1");
    }
    else
    {
        printf("%d %d",l[0],l[j-1]);
    }
}