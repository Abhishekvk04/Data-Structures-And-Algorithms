#include<stdio.h>
#include<string.h>
void main()
{
char str[10],str1[10];
int i,j,len=0;
printf("Enter the string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
len++;
for(j=0,i=len-1;i>=0;i--,j++)
str1[j]=str[i];
str1[j]='\0';
printf("reverse of a string\n");
puts(str1);
}
