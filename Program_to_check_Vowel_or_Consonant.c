#include<stdio.h>
int main()
{
    char c,upper_vowel,lower_vowel;
    scanf("%c",&c);
    upper_vowel=(c=='A'||c=='I'||c=='E'||c=='O'||c=='U');
    lower_vowel=(c=='a'||c=='i'||c=='e'||c=='o'||c=='u');
    if(upper_vowel||lower_vowel)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}
