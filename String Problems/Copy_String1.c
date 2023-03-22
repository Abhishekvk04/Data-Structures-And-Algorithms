#include<stdio.h>
#include<string.h>
void main()
{
char str1[10],str2[10];
int i; 
printf(“Enter the string\n”);
gets(str1);
strcpy(str2,str1);
printf(“copied string is “);
puts(str2);
}
