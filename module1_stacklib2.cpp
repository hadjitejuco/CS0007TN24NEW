//stack string

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> name;
    string n;
    char quest;
    
    cout << "Enter data y/n: ";
    cin >> quest;
    //push
    while (quest=='Y' || quest=='y'){
        cout << "Enter name ";
        cin >> n;
        name.push(n);
        cout << "enter data again? y/n: ";
        cin >> quest;
    }
    
    cout << "Stack size " << name.size() << endl;
    //pop
    while(!name.empty()) {
        cout << name.top() << endl;
        name.pop();
        
    }
    cout << "Stack size " << name.size() << endl;
    return 0;
}
