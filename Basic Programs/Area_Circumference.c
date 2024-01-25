#include<stdio.h>
#define PI 3.14
int main()
{
    float r,a,cf;
    printf("Enter radius of circle ");
    scanf("%f",&r);
    a=PI*r*r;
    printf("The area of circle is %f\n",a);
    cf=2*PI*r;
    printf("The circumference of circle is %f\n",cf);
    return 0;
}
