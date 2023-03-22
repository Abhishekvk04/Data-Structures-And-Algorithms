#include<stdio.h>
#include<string.h>
void main()
{
char str[10],str1[10];
int i,j,n;
printf("Enter the string\n");
gets(str);
strcpy(str1,str);
printf("reverse of a string\n");
puts(strrev(str));
if(strcmp(str,str1)==0)
 printf("string is a palindrome\n");
 else
 printf("String is not a palindrome\n");
}
