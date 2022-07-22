#include<stdio.h>
int main()
{
    int i,j,n,m,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&m);
       for(j=0;j<m;j++)
       {
           if(m==j*j)
           {
               f=1;
               break;
           }
       }
       if(f==1)
       {
           printf("True
");
       }
       else
       {
           printf("False
");
       }
       f=0;
    }
    
}