// fibonacci series ----> 1, 1, 2, 3, 5, 8,....
#include<stdio.h>
int main(){
  int num, fib = 0, fibn = 1, result;
  printf(" How many values of Series?  ");
  scanf("%d", &num);
  printf("%d ", fibn);
  for (int i = 1; i <= num-1; i++){
     result = fib +fibn; //r = 0+1 =1 //r=1+1 = 2 //r=1+2 = 3
      fib = fibn; //fib = 1 //fib = 1 //fib =2
      fibn = result;// fibn = 1 //fibn = 2 //fibn = 3
    
    printf("%d ", result );
  }
  return 0;
}
