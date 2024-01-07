

//binary search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x);

int main()
{
    int arr[]={2,3,4,10,60,70,71}; //array declaration
    int n = sizeof(arr)/sizeof(arr[0]); //get the size of the array
    int x; //search value
    
    cout << "Enter number to search: ";
    cin >> x;
    
    int result  = binarySearch(arr, 0, n-1, x);
    
    if (result == -1)
        cout << "Element not found in the array "<< endl;
    else
        cout << "Element found at index " << result << endl;
    
    return 0;

}
int binarySearch(int arr[], int l, int r, int x)
{
    while(l <= r){
        int m = l + (r-l)/2;
        
        //check if x is present in the middle
        if (arr[m]==x)
            return m;
            
        // if x greater, ignore left half
        if (arr[m]<x)
            l = m + 1;
        
        // if x is smaller, ignore the right half
        else
        
            r = m - 1;
        
    }
    return -1;

    
}
