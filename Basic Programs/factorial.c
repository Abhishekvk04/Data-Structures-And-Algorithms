#include<stdio.h>
int main(){
  int num, f = 1;
  printf(" Enter the value ");
  scanf("%d", &num);
  for (int i =1; i<= num; i++){
    f *=i; //f=1*1 =1 , f=1*2=2, f=2*3=6 ......
  }
  printf("The factorial of %d is %d", num, f);
  return 0;
}
