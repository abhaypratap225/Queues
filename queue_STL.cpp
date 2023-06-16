#include<iostream>
using namespace std;
#include<queue>

int main()
{
    // creating queue
    queue<int> q;

    // pushing elements
    q.push(1);
    q.push(5);
    q.push(2);
    q.push(4);
    q.push(8);

    // size of queue
    cout<<"The Size of Queue is "<<q.size()<<endl;

    // check Front element
    cout<<"The Front element of Queue is "<<q.front()<<endl;

    //popping
    q.pop();
    cout<<"The Size of Queue is "<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    // Check if Empty
    if(q.empty())
    {
        cout<<"The Queue is Empty!"<<endl;
    }
    else{
        cout<<"The Queue is Not Empty!"<<endl;
    }
}
