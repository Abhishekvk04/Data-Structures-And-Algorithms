#include<stdio.h>
#include<string.h>
void main()
{
char str1[30],str2[10];
int i,len=0,j;
printf("Enter the string1\n");
gets(str1);
printf("Enter the string2\n");
gets(str2);
for(i=0;str1[i]!='\0';i++)
len++;
for(j=0,i=len;str2[j]!='\0';j++,i++)
str1[i]=str2[j];
str1[i]='\0';
printf("concatenated  string is ");
puts(str1);
}
