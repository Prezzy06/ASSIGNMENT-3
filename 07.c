// 7. WAP to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,d;
   printf("Enter a,b,c:");
   scanf("%f%f%f",&a,&b,&c);

   d = b*b - 4*a*c;
   printf("%f\n",d);

   if(d>0)
   {
       printf("Roots are real and distinct ");
   }
   else if(d==0)
   {
    printf("Roots are real and equal");
   }
   else
   {
       printf("Roots are imaginary");
   }
   return 0;
}

 