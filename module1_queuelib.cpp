//queue fist-in first-out

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> grade;
    
    int n;
    
    char quest;
    
    cout << "Enter data y/n: ";
    cin >> quest;
    
    //push
    while (quest=='Y' || quest=='y'){
        cout << "Enter grade ";
        cin >> n;
        grade.push(n);
        cout << "enter data again? y/n: ";
        cin >> quest;
    }
    
    cout << endl;
    cout << "front element " << grade.front() << endl;
    cout << "last element " << grade.back() << endl;
    cout << "size of queue " << grade.size() << endl;
    
    //pop
    while(!grade.empty()) {
        cout << grade.front() << endl;
        grade.pop();
        
    }
    cout << "Queue size " << grade.size() << endl;

    return 0;
}
