/******************************************************************************

headRecursion
tailRecursion

*******************************************************************************/

#include <iostream>
using namespace std;

void headRecursion(int height);
void tailRecursion(int height);

int main()
{
    //demostrate head recursion 
    cout << "Head Recursion"<<endl;
    headRecursion(5);
    
    //demostrate tail recursion 
    cout << "Tail Recursion"<<endl;
    tailRecursion(5);
    return 0;
}

void headRecursion(int height)
{
    //base case 
    if (height==0) return;
    //process the Recursion 
    headRecursion(height-1);
    cout << height <<endl;
    
}
void tailRecursion(int height)
{
    //base case 
    if (height==0) return;
    cout <<height<<endl;
    tailRecursion(height-1);
    
}




