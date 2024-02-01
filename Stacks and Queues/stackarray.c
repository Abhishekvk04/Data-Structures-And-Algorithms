#include<stdio.h>
#define Max 5

int top =-1;
int stack_arr[Max];

void push(int data){
    if (top == Max -1 ){
        printf("Stack overflow\n");
        return;
    }
    top +=1;
    stack_arr[top] = data;
    printf("%d\n",data);
}

int pop(){
    int value;
    if (top == -1 ){
        printf("Stack underflow\n");
        exit(1); //abnormal termination of the program
    }
    value = stack_arr[top];
    top -=1;
    printf("%d\n",value);
}
void print(){
    if (top == -1 ){
        printf("Stack underflow\n");
        exit(1); //abnormal termination of the program
    }
    for(int i= top ; i>=0; i--){
        printf("%d\n",stack_arr[i]);
    }
}

int main(){
    int data;
    printf("Pushing the elements into stack\n");
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    printf("Poping the elements into stack\n");
    data = pop();
    data = pop();
    printf("The remaining element in the stack are : \n");
    print();
    return 0;

}
