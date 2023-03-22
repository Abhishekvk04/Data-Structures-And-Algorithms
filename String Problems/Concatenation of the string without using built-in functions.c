#include<stdio.h>
#include<string.h>
void main()
{
char str1[10],str2[10],str[30];
int i,len1,len2,j;
printf("Enter the string1\n");
gets(str1);
printf("Enter the string2\n");
gets(str2);
for(i=0;str1[i]!='\0';i++)
str[i]=str1[i];
for(j=0;str2[j]!='\0';j++,i++)
str[i]=str2[j];
str[i]='\0';
printf("concatenated  string is ");
puts(str);
}
