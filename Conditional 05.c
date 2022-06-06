#include<stdio.h>
int main()
{
    double gpa,ielts;
    printf("Enter your gpa:");
    scanf("%lf",&gpa);
    printf("Enter ielts score:");
    scanf("%lf",&ielts);
    if(gpa==5.00 || ielts>=7.00)
    {
        printf("You got Canadian Visa");
    }
    else
    {
        printf("You are rejected");
    }
    return 0;
}
