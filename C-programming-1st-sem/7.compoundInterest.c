// Write a program to calculate simple and compound interest.

#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);
    printf("\n --[Your name]--");

    getch();
    return 0;
}