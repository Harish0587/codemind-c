#include<stdio.h>
int main()
{
    char str[100];
    int n,c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]>=48&&str[j]<=57)
            {
                c++;
            }
        }
        if(c>0)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
        c=0;
        
    }
}