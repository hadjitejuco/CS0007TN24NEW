//linear search


#include <iostream>
using namespace std;

//prototype
int linearSearch(int arr[], int size, int x);


int main()
{
    int arr[]={2,4,0,1,9,5,8,3,7,6}; //array declaration
    int n = sizeof(arr)/sizeof(arr[0]); //get the size of the array
    int x; //search value
    
    cout << "Enter number to search: ";
    cin >> x;
    
    int result  = linearSearch(arr, n, x);
    
    if (result == -1)
        cout << "Element not found in the array "<< endl;
    else
        cout << "Element found at index " << result << endl;
    
    return 0;
}


int linearSearch(int arr[], int size, int x)
{
    for (int i=0; i<size; i++){
        if (arr[i]==x)
            return i; //found the element and return the index
    }
    return -1; //if not found 
    
    
}





