#include<stdio.h>
#include<math.h>
int main()
{
    int g,d;
    scanf("%d",&g);
    for(d=1;d<=g;d++)
    {
    int n,temp,count,count1,i,j,k,m,s,x,y,r,f;
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
            count=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }
            if(count==2)
            {
                x=i;
                s=1;
                break;
            }
            else
            {
                continue;
            }
    }
    k=n;
    while(k>0)
    {
        count1=0;
        for(i=1;i<=k;i++)
        {
            if(k%i==0)
            {
                count1++;
            }
        }
        if(count1==2)
        {
            y=k;
            m=1;
            break;
        }
        else
        {
            k++;
        }
    }
    f=abs(n-x);
    r=abs(n-y);
    if(f<r || f==r)
    {
        printf("%d
",x);
    }
    else
    {
        printf("%d
",y);
    }
    }
}