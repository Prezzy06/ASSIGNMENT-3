// 16. WAP to check whether the given character is an alphabet(upper case),alphabet(lower case),a digit or a special character.

#include<stdio.h>
int main()
{
    char c;
    printf("Enter character:");
    scanf("%c",&c);

    if(c>='0' && c<='9')
        printf("%c is a digit",c);

    else if(c>='A' && c<='Z')
        printf("%c is an alphabet(upper case)",c);

    else if(c>='a' && c<='z')
        printf("%c is an alphabet(lower case)",c);

    else
        printf("%c is a special character",c);
    return 0;
}

