#include <iostream>
using namespace std;
class Stack
{
    int arr[5];
    int top;
public:
    Stack()
    {
       top = -1;
    }
    void push(int val)
    {
        if (top == 4)
        {
            throw "Stack Overflow Exception!";
        }
        arr[++top] = val;
        cout << "Pushed: " << val << endl;
    }
    void pop()
    {
        if (top == -1)
        {
            throw "Empty Stack Exception!";
        }
        else if (top == 0)
        {
            cout << "Popped: " << arr[top--] << endl;
            throw 0;
        }
        else
        {
            cout << "Popped: " << arr[top--] << endl;
        }
    }
};
int main()
{
    Stack s;
    try {
        try {
            s.push(10);
            s.push(20);
            s.push(30);
            s.push(40);
            s.push(50);
            s.push(60);
        }
        catch (const char* msg)
        {
            cout << "Exception in main " << msg << endl;
        }
        try {
            s.pop();
            s.pop();
            s.pop();
            s.pop();
            s.pop();
            s.pop();
        }
        catch (int)
        {
            cout << "Stack Underflow Exception!" << endl;
        }
        try
        {
            s.pop();
        }
        catch (const char* msg)
        {
            cout << "Inner catch: " << msg << endl;
            throw;
        }
    }
    catch (...)
    {
        cout << "Default exception" << endl;
    }
    return 0;
}
