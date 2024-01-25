#include<stdio.h>
int main()
{
    int i ,j,n,a[100],temp;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
        //bubble sort
        for (i=0;i<n-1;i++)
        {
            for ( j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }  
    printf("\nThe sorted array elements are : \n");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;   
}
