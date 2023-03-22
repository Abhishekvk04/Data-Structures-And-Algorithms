#include<stdio.h>
#include<string.h>
void main()
{
char str1[30],str2[10];
int i,len,j;
printf("Enter the string1\n");
gets(str1);
printf("Enter the string2\n");
gets(str2);
if(strcmp(str1,str2)==0)
printf("strings are equal");
else
printf(“strings are not equal”);
}
