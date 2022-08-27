#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j,k=0,ch[n],r;
    for(j=n-1;j>=n/2;j--)
    {
        ch[k]=arr[j];
        k++;
    }
    for(i=0;i<n/2;i++)
    {
        ch[k]=arr[i];
        k++;
    }
    for(j=0;j<n;j++)
    {
        printf("%d ",ch[j]);
    }
}