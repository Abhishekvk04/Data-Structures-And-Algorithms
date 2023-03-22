#include<stdio.h>
#include<string.h>
void main()
{
char str[10],str1[10];
int i,j,n=0,flag=0;
printf("Enter the string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
n++;
for(j=0,i=n-1;i>=0;i--,j++)
str1[j]=str[i];
str1[j]='\0';
printf("reverse of a string\n");
puts(str1);
for(i=0;i<n;i++)
if(str[i]!=str1[i])
flag=1;
if(flag==1)
printf("string is not a palindrome\n");
else
printf("String is a palindrome\n");
}
