// 15. WAP to check whether the given number is positive,negative or zero.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if(n>0)
        printf("%d is Positive",n);

    else if(n==0)
        printf("Zero");

    else
        printf("%d is negative",n);
    return 0;
}

