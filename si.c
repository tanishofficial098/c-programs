#include <stdio.h>
int main() 
{
    float principal, rate, time, simple_interest;

    printf("Principal Amount??: ");
    scanf("%f", &principal);
    printf("Rate of Interest??: ");
    scanf("%f", &rate);
    printf("Time Period (years)??: ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}   
