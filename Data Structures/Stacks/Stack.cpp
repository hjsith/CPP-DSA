#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack <int> s;
    stack <int> q;

    s.push(5); //place 5 on the top of the stack
    s.push(7); //place 7 on the top of the stack
    q.push(2321);
    cout << s.top() << endl; //returns top element (7)
    s.pop(); //Remove top element (7)
    cout << s.empty() << endl; //returns true (1) if empty, false (0) if not
    s.push(22);
    cout << s.size() << endl; //returns size of stack;
    s.emplace(8);
    s.swap(q);
    cout << s.size() << endl;
    cout << q.top();
    /*if you want to add a copy of an existing instance of the class to the container, use push. 
    If you want to create a new instance of the class, from scratch, use emplace */
}