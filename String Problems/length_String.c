#include<stdio.h>
void main()
{
char str[10];
int i=0;
printf(“Enter the string\n”);
gets(str);
while(str[i]!=’\0’)
i++;
printf(“length of given string is %d”,i);
}
