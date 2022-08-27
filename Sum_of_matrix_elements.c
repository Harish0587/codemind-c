#include<stdio.h>
int main()
{
    int i,j,a,b,arr[1000][1000],s=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            s=s+arr[i][j];
        }
    }
    printf("%d",s);
}