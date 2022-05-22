#include<stdio.h>
int main()
{
    int i,n,p=1,m,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        for(j=m;j>=1;j--)
        {
            p=p*j;
        }
        printf("%d
",p);
        p=1;
    }
}
