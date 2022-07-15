// 9. WAP TO find the greatest among three given numbers. Print number once if the greatest number appears 2 or 3 times.

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a,b,c:");
    scanf("%d%d%d",&a,&b,&c);

    if((a>=b) && (a>=c))
    {
       printf("%d is greatest",a);
    }

    else if((b>=a) && (b>=c))
    {
        printf("%d is greatest",b);
    }

    else
    printf("%d is greatest",c);

    return 0;

}

