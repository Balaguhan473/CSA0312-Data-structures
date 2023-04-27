#include<stdio.h>
int  main() 
{
    int n,i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
 
    int arr[n];
 
    printf("Enter %d elements in the array: ",n);
    
    {
        scanf("%d",&arr[i]);
    }
 
    printf("Even numbers in the array are: ");
    {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
 
    printf("\nOdd numbers in the array are: ");
    {
        if(arr[i]%2==1)
            printf("%d ", arr[i]);
    }
    return 0;
}
