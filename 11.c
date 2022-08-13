/*
11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/

#include<stdio.h>
int main()
{
    float a,b,c,d,e,m;
    printf("Enter Marks in Hindi,English,Maths,Science,History\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    m=(a+b+c+d+e)/5.0;
    printf("Final Percentage is %f \n",m);

    if(m>=33)
    printf("Candidate passed the Examination");
    else
    printf("candidate failed");

    return 0;

}