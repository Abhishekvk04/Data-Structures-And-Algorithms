#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20]="Good",s2[10]="morning",s3[20],s4[10],s5[10]="morn",s6[10]="ing";
    int len;
    len=strlen(s1);
    printf("length of string1 is %d\n",len);
    strcpy(s3,s1);
    printf("Copied string is %s\n",s3);
    strcat(s1,s2);
    printf("concatenated string is %s\n",s1);
    if(strcmp(s1,s3)==0)
     printf("strings %s and %s are equal\n",s1,s3);
    else
    printf("strings %s and %s are not equal\n",s1,s3);
    if(strncmp(s1,s3,4)==0)
      printf("first 4 (characters of strings %s and %s are same\n",s1,s3);
    else
      printf("first 4 characters of strings %s and %s are not same\n",s1,s3);
     if(strstr(s1,s3)=='\0')
      printf("string %s is not a substring of string %s",s3,s1);
     else
       printf("string %s is a substring of string %s",s3,s1);
 }

