#include<stdio.h>
int main()
{
    int n,i,t;
    int fact=1,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        for(j=t;j>0;j--)
        {
            fact=fact*j;
        }
        printf("%d
",fact);
        fact=1;
    }
    
    
}