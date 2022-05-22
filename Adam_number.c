#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    s=n*n;
    int w,n1,s1,sum1=0;
    while(n>0)
    {
        w=n%10;
        sum1=sum1*10+w;
        n=n/10;
    }
    s1=sum1*sum1;
    int a,sum2=0;
    while(s1>0)
    {
        a=s1%10;
        sum2=sum2*10+a;
        s1=s1/10;
    }
    if(s==sum2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}