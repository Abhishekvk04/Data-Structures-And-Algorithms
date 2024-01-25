#include<stdio.h>
int main()
{
    int array[]={2,4,6,8,9,10};
    int low = 0;
    int high= (sizeof(array)/sizeof(int))-1 ,mid;
    int key = 82;
    while(low<=high){
        mid=(low+high)/2;
        if(array[mid]==key){
            printf("Key is present at pos = %d\n",mid+1);
            break;
        }
        else if(key>array[mid]){
            low=mid+1;
        }else
        {
            high=mid-1;
        }
    }
    if (array[mid]!=key)
    {
        printf("Key not found");
    }
        
        
    return 0;
}
