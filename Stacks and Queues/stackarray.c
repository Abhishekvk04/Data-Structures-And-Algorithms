#include<stdio.h>
#include<stdlib.h>
#define Max 5   //defining the max size

//global variables
int top =-1;
int stack_arr[Max];

//Functions
int isFull(){
    if (top == Max - 1)
        return 1;
    else
        return 0;
}

int isEmpty(){
    if(top == -1)
        return 1;
    else
        return 0;
}

int peek(){
    if(isEmpty()){
        printf("Stack underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

//push the elements into the stack
void push(int data){
    if (isFull()){
        printf("Stack overflow\n");
        return;
    }
    top +=1;
    stack_arr[top] = data;
    printf("%d\n",data);
}

//pop the elements from the stack
int pop(){
    int value;
    if (isEmpty()){
        printf("Stack underflow\n");
        exit(1); //abnormal termination of the program
    }
    value = stack_arr[top];
    top -=1;
    printf("%d\n",value);
}

//printing all the remaining elements in the stack
void print(){
    if (isEmpty()){
        printf("Stack underflow\n");
        exit(1); //abnormal termination of the program
    }
    for(int i= top ; i>=0; i--){
        printf("%d\n",stack_arr[i]);
    }
}

//executing the functions in the main function
int main(){
    int data, choice;
    
    while(1){ // 1=true repeates the program infinite times
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quit\n");
        printf("Please Enter your choice\n");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d", &data);
                push(data);
                break;
            
            case 2:
                data = pop();
                printf("Deleted element is %d\n",data);
                break;
                
            case 3:
                printf("The topmost element of the stack is %d\n",peek());
                break;
                
            case 4:
                print();
                break;
                
            case 5:
                exit(1);
                
            default:
                printf("Wrong choice\n");
        }
    }
    
    return 0;

}

