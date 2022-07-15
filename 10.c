// 10. WAP which takes the cost price and selling price of a product from the user.Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    float  cp,p,l,sp,pp,lp; // cost price,profit,loss,selling price,profit percentage,loss percentage.
    printf("Enter cp,sp:");
    scanf("%f%f",&cp,&sp);

    if(sp>cp)
    {
        printf("PROFIT\n");
        p=sp-cp;
        printf("Profit=%f\n",p);
        pp=p/cp*100;
        printf("Profit Percentage=%f",pp);
    }
    else
    {
        printf("LOSS\n");
        l=cp-sp;
        printf("Loss=%f\n",l);
        lp=l/cp*100;
        printf("Loss Percentage=%f",lp);
    }
    return 0;

}
