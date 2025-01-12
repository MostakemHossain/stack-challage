#include <bits/stdc++.h>
using namespace std;

class TwoStacks
{
private:
    int *arr;
    int size;
    int top1, top2;

public:
    TwoStacks(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    // Push to Stack 1
    void push1(int data)
    {
        if (top1 < top2 - 1)
        {
            arr[++top1] = data;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    // Push to Stack 2
    void push2(int data)
    {
        if (top1 < top2 - 1)
        {
            arr[--top2] = data;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    // Pop from Stack 1
    int pop1()
    {
        if (top1 >= 0)
        {
            return arr[top1--];
        }
        else
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
    }

    // Pop from Stack 2
    int pop2()
    {
        if (top2 < size)
        {
            return arr[top2++];
        }
        else
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
    }

    // Peek Stack 1
    int peek1()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
        {
            cout << "Stack 1 is empty" << endl;
            return -1;
        }
    }

    // Peek Stack 2
    int peek2()
    {
        if (top2 < size)
        {
            return arr[top2];
        }
        else
        {
            cout << "Stack 2 is empty" << endl;
            return -1;
        }
    }

    bool isEmptyStack1()
    {
        return top1 == -1;
    }

    bool isEmptyStack2()
    {
        return top2 == size;
    }
};

int main()
{
    TwoStacks ts(10);

    ts.push1(5);
    ts.push1(10);
    ts.push1(15);

    ts.push2(50);
    ts.push2(40);
    ts.push2(30);

    cout << "Top of Stack 1: " << ts.peek1() << endl;
    cout << "Top of Stack 2: " << ts.peek2() << endl;

    ts.pop1();
    ts.pop2();

    cout << "After popping, Top of Stack 1: " << ts.peek1() << endl;
    cout << "After popping, Top of Stack 2: " << ts.peek2() << endl;
    cout << ts.isEmptyStack1();

    return 0;
}
