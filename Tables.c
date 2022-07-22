#include<stdio.h>
int main()
{
    int m,n,i,k;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            k=m*i;
            printf("%d x %d = %d
",m,i,k);
        }
    }
}