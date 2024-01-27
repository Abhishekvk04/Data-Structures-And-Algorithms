#include<stdio.h>
int main(){
  int num, r = 0, temp = 0; //r = result
  printf("Enter a positive integer  ");
  scanf("%d", &num);
  temp = num;
  while(temp != 0){
    r = r * 10;
    r = r + (temp % 10); // result += remainder //remainder = temp % 10
    temp = temp / 10; // temp here stores the quotient of the num after dividing num by 10
  }
  if (num == r)
    printf(" %d is a palindrome", num);
  else
    printf(" %d is not a palindrome", num);
  return 0;
}

//example 121
// num = 121, temp = 121 , r = 0
//Iteration 1 --->
  // r = 0 * 10, r = 0 +(1) , temp = 12
//Iteration 2
  // r = 1 *10 = 10 , r = 10 + 2 = 12 , temp = 1
//Iteration 3
  // r = 12 *10 = 120, r = 120 + 1 = 121 , temp = 0
// if num=121 == r=121  -----> Palindrome
