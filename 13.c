// 13. WAP to check whether a given number is divisible by 2 and divisible by 3.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if(n%2==0 && n%3==0)
    {
        printf("%d is divisible by 3 and divisible by 2",n);
    }
    else
        printf("%d is not divisible by 3 and divisible by 2",n);
        return 0;

}
