//stacks
//LIFO (last in first out)
//push -> insert / add 
//pop -> delete / remove 
//top -> 

#include <iostream>
#include <stack> //push(), pop(), size(), top()
using namespace std;

int main()
{
    int i, x;
    stack<int> nums;
    cout << "stack size " << nums.size() << endl;
    nums.push(11);
    nums.push(22);
    nums.push(33);
    cout << "stack size " << nums.size() << endl;
    cout << "top " << nums.top() << endl;
    // nums.pop();
    // cout << "stack size " << nums.size() << endl;
    
    for (i=nums.size(); i>0;i--) {
        x=nums.top();
        cout << x << endl;
        nums.pop();
    }
    cout << "stack size " << nums.size() << endl;
    return 0;
}
