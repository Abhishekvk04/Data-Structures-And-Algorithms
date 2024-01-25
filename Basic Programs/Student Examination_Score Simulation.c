#include<stdio.h>
int main()
{
   float q1,q2,q3,q4,m1,m2,f,s1,s2,t;
   printf("Enter the marks of four quizzes : ");
   scanf("%f %f %f %f", &q1,&q2,&q3,&q4);
   s1=(q1+q2+q3+q4)/4;
   printf("Enter the marks of two midterms : ");
   scanf("%f %f",&m1,&m2);
   s2=(m1+m2)/2;
   printf("Enter the value of final marks : ");
   scanf("%f",&f);

   t=(30*s1/100)+(40*s2/100)+(30*f/100);
   printf("Average score of student = %f",t);
   return 0;
}
