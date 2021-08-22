#include <stdio.h>
#include "Insertion.h"
#include "DeleteByPosition.h"
#include "DeleteByValue.h"
#include "Binary_Search.h"
int input();

void display_arr();
int main()
{
    int arr[50],n=0;
    
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    display_arr(arr,n);
    
    int choice;
    int num,pos;
    int sum=0,rem=0,count=0;
    printf("\n\n------------Menu------------\n");
    printf("Press 1 to Insert at a number at nth position in the array\n");
    printf("Press 2 to Insert a number at the beginning\n");
    printf("Press 3 to Insert a number at the end\n");
    printf("Press 4 to Delete by position\n");
    printf("Press 5 to Delete by element\n");
    printf("Press 6 to Search by position\n");
    printf("Press 7 to Search by element \n");
    printf("Press 8 to Revert the array  \n");
    printf("Enter your choice: ");
    choice = input();
      
    switch (choice) {
        case 1: {
            printf("Enter the element you want to insert: ");
            num = input();
            
            printf("Enter the position at which you want to insert the element:");
            pos = input();

            index_insertion(arr,n,num,50,pos-1);
            n+=1;
            display_arr(arr,n);            
            break;
        }

        case 2:{
            printf("Enter the element you want to insert: ");
            num = input();

            index_insertion(arr,n,num,50,0);
            n+=1;
            display_arr(arr,n);            
            break;                   
        }

        case 3:{
            printf("Enter the element you want to insert: ");
            num = input();

            index_insertion(arr,n,num,50,n);
            n+=1;
            display_arr(arr,n);            
            break;     
        }
        case 4:{
            printf("Enter the index of the array to remove the element: ");
            pos = input();

            index_deletion(arr,n,pos);
            n -= 1;
            display_arr(arr,n);            
            break;
        }

        case 5:{
            printf("Enter the value of element to be removed from the array: ");
            num = input();

            DeleteByValue(arr,num,n); 
            break;
        }

        case 6:{
            printf("Enter the index at which you want to find the value from the array: ");
            num = input();
            printf("%d",arr[num]);
            break;
        }
        case 7:{
            printf("Enter the value of element to check if it's in the array: ");
            num = input();
            int result = BinarySearch(arr, 0, n - 1, num);
            (result == -1) ? printf("Element is not present in array"):printf("Element is present at index %d",result);
            break;
        }

        case 8:{
            printf("The reverted array: ");
            for (int i = n-1; i >=0; i--)
            {
               printf("%d ",arr[i]);
            }
            break;
        }
    }
    return 0;
}
int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}
  
void display_arr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}
