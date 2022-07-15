// 14. WAP To check whether the given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if(n%7==0 && n%3==0)
        printf("%d is divisible by both 7 and 3",n);

    else if(n%7==0)
    {
        printf("%d is divisible by 7",n);
    }
    else if(n%3==0)
        printf("%d is divisible by 3",n);

    else
        printf("%d is neither divided by 7 and nor by 3",n);
        return 0;

}

