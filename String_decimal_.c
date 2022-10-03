#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int c1=0;
        scanf("%s",st);
        for(j=0;st[j]!=NULL;j++)
        {
            if(st[j]>=48&&st[j]<=57)
            {
                c1++;
            }
        }
        if(c1==strlen(st))
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}