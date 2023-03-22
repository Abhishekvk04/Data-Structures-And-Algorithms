#include<stdio.h>
#include<string.h>
void main()
{
char str[10];
int length;
printf(“Enter the string\n”);
gets(str);
length=strlen(str);
printf(“length of given string is %d”,length);
}
