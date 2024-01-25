#include<stdio.h>
#include<math.h>

int main(){
  int num, i, flag= 1, inum;
  printf("Enter a positive number\n");
  scanf("%d",&num);

  //If the value of num = 41
  //inum = num; -> for loop iterates 40 times
  //inum = num / 2; -> Here the for loop iterates 40/2=20 i.e., 19 times
  inum = sqrt(num); // Here the for loop iterates only 6 times which is an optimized solution
  
  for (i = 2; i <= inum; i++){
    //<=n/2 or i<=sqrt(n)
    if (num % i == 0 )
      flag = 0;
      break;
  }
if (flag)
      printf("It is a prime number\n"); 
    else
      printf("It is not a prime number\n");
}
