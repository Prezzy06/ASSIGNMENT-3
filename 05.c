// 5.  WAP to check whether the given number is 3 digit or not.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if (n>99 && n<1000)
    {
        printf("%d is 3 digit Number",n);
    }
    else
    {
        printf("%d is not a 3 digit Number",n);
    }
    return 0;
}

 