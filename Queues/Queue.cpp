#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <int> q;
    queue <int> r;
    
    q.push(5); //place 5 at the front of the queue
    q.push(3); //place 3 next in the queue
    cout << q.front() << endl; //returns first element (5)
    q.pop(); //Remove top element (5)
    cout << q.empty() << endl; //returns true (1) if empty, false (0) if not
    q.push(22);
    cout << q.size() << endl; //returns size of the queue
    q.emplace(8);
    r.push(44); //place 44 next in the queue 'r'
    q.swap(r);
    cout << q.size() << endl;
    cout << q.back(); //returns the last element in the queue

    /*if you want to add a copy of an existing instance of the class to the container, use push. 
    If you want to create a new instance of the class, from scratch, use emplace */
}