#include<stdio.h>
int main(){
  int num, i, flag= 1;
  printf("Enter a positive number\n");
  scanf("%d",&num);
  for (i = 2; i < num ; i++){
    //<=n/2 or i<=sqrt(n)
    if (num % i == 0 )
      flag = 0;
      break;
  }
if (flag)
      printf("It is a prime number\n"); 
    else
      printf("It is a pnot prime number\n");
}
