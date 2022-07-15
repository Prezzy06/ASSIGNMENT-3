// 17. WAP which takes the length of sides of triangle as an input. Display whether the triangle is valid or not.

#include<stdio.h>
int main()
{
    int AB,BC,CA;
    printf("Enter lengths AB,BC,CA:");
    scanf("%d%d%d",&AB,&BC,&CA);

    if(AB+BC>CA && AB+CA>BC && BC+CA>AB)
        printf("Triangle is valid");
    else
        printf("Triangle is  invalid");
    return 0;
}
