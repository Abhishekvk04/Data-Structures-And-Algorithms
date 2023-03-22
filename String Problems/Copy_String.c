#include<stdio.h>
void main()
{
char str1[10],str2[10];
int i; 
printf(“Enter the string\n”);
gets(str1);
for(i=0;str1[i]!=’\0’;i++)
str2[i]=str1[i];
str2[i]=’\0’;
printf(“copied string is “);
puts(str2);
}
