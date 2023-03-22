#include<stdio.h>
#define disc 10 //In percentage
#define tax 4 //In percentage
int main()
{
    int item_no,quan;
    float unit_price,total_price;
    for(int i= 0;i<=3;i++)
    {
        printf("Enter item number, quantity, unit price ");
        scanf("%d %d %f",&item_no,&quan,&unit_price);
        total_price=unit_price*quan;
        total_price=total_price-(disc*total_price/100)+(tax*total_price/100);
        printf(" Item number = %d\n Unit price = %f\n Quantity = %d\n Discount = %d\n Tax = %d\n Total price = %f\n ",
        item_no,unit_price,quan,disc,tax,total_price);
    }
    return 0;
}
