#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,s=0;
    char str[1000];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(isdigit(str[i]))
        {
            s=s+(int(str[i])-48);
        }
    }
    printf("%d",s);
}