// 1. WAP To check whether the given number is positive or non positive

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if(n>0)
    {
        printf("%d is a Positive Number",n);
    }
    else
    {
        printf("%d is a Non Positive Number",n);
    }
    return 0;
}

