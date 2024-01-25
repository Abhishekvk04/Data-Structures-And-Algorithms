#include<stdio.h>

int main(){
  int num, rem, sum=0, temp;
  printf("Enter an integer number\n");
  scanf("%d", &num);
  temp = num;

  while(num){
    rem = num % 10;
    sum = sum +(rem * rem * rem);
    num = num / 10; 
    printf("Rem = %d\n", rem);
    printf("Sum = %d\n", sum);
  }

  if (temp == sum)
    printf("It is a Armstrong number\n", temp);
  else
    printf("It is not a Armstrong number\n",temp);
return 0;
}
  
