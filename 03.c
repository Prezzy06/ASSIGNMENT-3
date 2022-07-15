// 3. WAP to check whether the given number is even number or an odd number.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("%d is an even number",n);
    }
    else
    {
        printf("%d is an odd number",n);
    }
    return 0;
}

