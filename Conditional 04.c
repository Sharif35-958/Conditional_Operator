#include<stdio.h>
int main()
{
    double cgpa,ielts;
    printf("Enter cgpa:");
    scanf("%lf",&cgpa);
    printf("Enter ielts score:");
    scanf("%lf",&ielts);
    if(cgpa>=3.75)
    {
        if(ielts>=7.00)
        {
            printf("You got the scholarship");
        }
    }
    else
    {
        printf("You are rejected");
    }
    return 0;
}
