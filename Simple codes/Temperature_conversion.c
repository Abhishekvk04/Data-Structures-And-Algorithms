//Convert tempr given in celsius to Fahrenheit and vice vesrsa.
#include<stdio.h>
int main()
{
    double T,t,C,F;
    printf("Enter temperature in celsius: ");
    scanf("%lf",&C);
    T=((9*C)/5)+32;
    printf("The equivalent temperature in Fahrenheit: %lf\n",T);
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf",&F);
    t=((F-32)/9)*5;
    printf("The equivalent temperature in Celsius: %lf\n",t);
    return 0;  
}
