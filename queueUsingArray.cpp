#include<iostream>
using namespace std;

class queue{

    public:
    int arr[10001];
    int front=0;
    int rear=0;

    void push(int x)
    {
        if(rear==10001) return;
        arr[rear]=x;
        rear++;
    }

    int pop()
    {
        if(front==rear) return -1;

        front++;
        if(front==rear)
        {
            front=0;
            rear=0;
        }
    }

    bool empty()
    {
        if(front==rear) return true;
        return false;
    }

    int fronts()
    {
        return arr[front];
    }
};

int main()
{
    queue q;
    q.push(5);
    cout<<q.fronts()<<endl;
    q.push(45);
    cout<<q.empty()<<endl;
    cout<<q.fronts()<<endl;
    q.pop();
    cout<<q.fronts()<<endl;

}