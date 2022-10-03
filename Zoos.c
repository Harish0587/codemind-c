#include<stdio.h>
#include<string.h>
int main()
{
    char st[200];
    scanf("%s",st);
    int l,c1=0,c2=0,i;
    l=strlen(st);
    if(l<=20)
    {
        for(i=0;i<l;i++)
        {
            if(st[i]=='z')
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if(c1*2==c2)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
}