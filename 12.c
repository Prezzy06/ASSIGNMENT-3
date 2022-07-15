// 12. WAP to check whether a given alphabet is in upper case or lower case.

#include<stdio.h>
int main()
{
    char character;
    printf("Enter character:");
    scanf("%c",&character);
    if(character>='A' && character<='Z')
        printf("%c is in upper case",character);

    if (character>='a' && character<='z')
        printf("%c is in lower case",character);
        return 0;
}

