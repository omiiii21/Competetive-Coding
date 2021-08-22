#include <stdio.h>
int index_insertion(int arr[],int size, int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    else{
        for (int i = size; i >=index; i--)
        {
            arr[i+1]= arr[i];
        }
        arr[index]=element;
        return 1;
    }
    

}