// 6. WAP To print greater between two numbers.Print one number if both are the same

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%d is greater",a);
    }
    else if(a==b)
    {
        printf("%d==%d, so Both are same",a,b);
    }
    else
        printf("%d is greater",b);
        return 0;
}

