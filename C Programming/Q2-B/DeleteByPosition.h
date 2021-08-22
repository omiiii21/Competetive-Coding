#include <stdio.h>
int index_deletion(int arr[],int size,int index){

    for (int i = index; i < size-1; i++)
        arr[i]= arr[i+1];
}