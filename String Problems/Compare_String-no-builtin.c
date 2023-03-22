#include<stdio.h>
#include<string.h>
void main()
{
char str1[30],str2[10];
int i,len=0,j,flag=0;
printf("Enter the string1\n");
gets(str1);
printf("Enter the string2\n");
gets(str2);
for(i=0;str1[i]!='\0';i++)
len++;
for(i=0;i<len;i++)
if(str1[i]!=str2[i])
flag=1;
if(flag==0)
printf("strings are equal");
else
printf("strings are not equal");
}
