/******************************************************************************

ALGO 

Bubble sort 
1. start
2. compare the adjacent element 
    array[i] and array[i+1] 
    if not in desired order 
        3 1 -> swap 1 3 
3.  process throughout the array 
4.  complete all the pass
5.  stop 

functions
    swap -> function() / UDF 
        3 1 -> 1 3 
    printArray 
    bubbleSort 

*******************************************************************************/

#include <iostream>

using namespace std;
//prototype
void printArray(int arr[], int size);
void swap (int &a, int &b);
void bubbleSort(int arr[], int size);
int main()
{
    //create array 
    int arr[]={64,34,25,12,22,11,90};
    //compute for the size of the array 
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //display the original array (unsorted array)
    cout << "Dispaly original array " << endl;
    printArray(arr,n);

    bubbleSort(arr,n);
    
    cout << "Sorted array " << endl;
    printArray(arr,n);
    return 0;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i<size;i++)
        cout << arr[i] << " ";
    cout << endl;
    
}
//UDF swap 
void swap (int &a, int &b)
{
    
    int temp = a;
    a = b;
    b = temp;
    
}

void bubbleSort(int arr[], int n)
{
    //outloop
    for (int i =0; i<n-1;i++){
         //innerloop
         for (int j=0; j<n-i-1;j++) {
             if (arr[j]>arr[j+1]) {
                 swap(arr[j],arr[j+1]);
             }
         }
        cout << "array after pass " << i+1 << ":";
        printArray(arr,n);
    }
}
