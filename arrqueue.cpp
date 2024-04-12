#include <iostream>
using namespace std;
#define n 20

class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int val)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow." << endl;
            return;
        }
        back++;
        arr[back] = val;

        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "No element to pop." << endl;
            return;
        }
        front++;
    }

    void peek()
    {

        if (front == -1 || front > back)
        {
            cout << "No element to peek." << endl;
            return;
        }

        cout << "The first element of queue: " << arr[front] << endl;
    }

    bool isEmpty()
    {

        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();

    cout << q.isEmpty() << endl;

    return 0;
}