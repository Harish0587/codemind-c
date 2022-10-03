#include<stdio.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    int i,n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        printf("%c",st[i]);
    }
}