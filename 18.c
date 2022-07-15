// 18. WAP Which takes the month number as an input and display number of days in that month,

#include<stdio.h>
int main()
{
    int n;
    printf("Enter month number:");
    scanf("%d",&n);

    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
        printf("31 DAYS");

    else if(n==4 || n==6 || n==9 || n==11 )
        printf("30 DAYS");

    else if(n==2)
        printf("28 or 29 DAYS");
    else
        printf("It is not a month");
    return 0;
}
