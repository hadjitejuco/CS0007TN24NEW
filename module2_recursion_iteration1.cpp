/******************************************************************************

Simulate the difference between iteration and recursion

*******************************************************************************/

#include <iostream>
using namespace std;
//prototype
int sumIterative(int n);  //iteration
int sumRecursive(int n); //recursion

int main()
{
    cout << "Iterative Approach\n";
    cout << sumIterative(5) << endl;
    cout << "Recursive Approach\n";
    cout << sumRecursive(4) << endl;

    return 0;
}

int sumIterative(int n)
{
    
    int result = 0;
    for (int i=0; i<=n; i++){
        result += i;
        
    }
    return result;
    
}
int sumRecursive(int n)
{
    
    //base case
    if (n==1) return 1;
    return n + sumRecursive(n-1);
    
}
