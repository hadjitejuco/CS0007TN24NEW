//string procesing 


#include <iostream>
#include <string>

using namespace std;

int searchString(string arr[], int size, string target);

int main()
{
    string arr[]={"apple","banana","cherry","date",};
    int n = sizeof(arr) / sizeof(arr[0]); 
    string target;
    
    
    cout << "Enter the string to search: ";
    getline(cin,target); //allow use of spaces 

    int result = searchString(arr, n, target);
    
    if (result == -1)
        cout << "String " << target << " is not present in the array. " << endl;
    else
        cout << "String " << target << " found at index " << result << endl;
    return 0;
}


int searchString(string arr[], int size, string target)
{
    for (int i = 0; i < size; i++) {
        if (arr[i]==target){
            return i; //true 
        }
    }
    return -1; //false 
    
    
}
