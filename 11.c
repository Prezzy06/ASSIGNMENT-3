/* 11. WAP to take marks of 5 subjects from the user. Assume marks are given out from 100 and passing marks is 33.
    Now whether the candidate passed the examination or failed. */

#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,tm,tp; // marks in subject 1,2,3,4,5,total marks,total percentage.
    printf("Enter s1,s2,s3,s4,s5:");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    tm=s1+s2+s3+s4+s5;
    tp=tm/500 *100;
    printf("Total Marks=%f\nTotal Percentage=%f\n",tm,tp);

    if(tp>=33)
        printf("Candidate Passed with Percentage=%f",tp);
    else
        printf("Candidate Failed with Percentage=%f",tp);
    return 0;
}

