/*#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    printf("Enter the type of operator that to be exhicuted ");
    getchar();
        op=getchar();
        if(op=='E'||op=='e')
            exit(1);
    switch (op)
    {
    case "+":
        printf("The sum of two numbers is : %d",a+b);
        break;
    case "-":
        printf("The difference of two numbers is : %d",a-b);
        break;
    case "*":
        printf("The product of two numbers is : %d",a*b);
        break;
    case "/":
        printf("The division of two numbers is : %d",a/b);
        break;
    case "%":
        printf("The reminder of two numbers is : %d",a%b);
        break;
    
    default:printf("Invalid Operrator ");
        break;
    }
    return 0;
}*/

//calculator operration
#include<stdio.h>
int main()
{
    int a, b, c;
    char op;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    do
    {
        printf("\n\nMENU\n");
        printf("+ Addition\n");
        printf("- Subtraction\n");
        printf("* Multiplication\n");
        printf("/ Division\n");
        printf("%% Remainder\n");
        printf("E Exit\n");
        printf("Enter your choice :");
        getchar();
        op=getchar();
        if(op=='E'||op=='e')
            exit(1);
        switch(op)
        {
        case '+':
            printf("Addition\n");
            c=a+b;
            printf("Sum=%d\n",c);
            break;
        case '-':
            printf("Subtraction\n");
            c=a-b;
            printf("Difference=%d\n",c);
            break;
        case '*':
            printf("Multiplication\n");
            c=a*b;
            printf("Product=%d\n",c);
            break;

        case '/':
            printf("Division\n");
            c=a/b;
            printf("Quotient=%d\n",c);
            break;
        case '%':
            printf("Remainder\n");
            c=a%b;
            printf("Remainder=%d\n",c);
            break;
        default:
            printf("Invalid Option\n");
            break;
        }	/*end of switch statement*/
    }
    while(1);	/*End of while*/
return 0;
}
