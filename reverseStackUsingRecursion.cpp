#include <bits/stdc++.h>
using namespace std;

void insetAtButtom(stack<int> &s, int num)
{
    if (s.empty())
    {
        s.push(num);
        return;
    }
    int temp = s.top();
    s.pop();
    insetAtButtom(s, num);
    s.push(temp);
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int temp = s.top();
    s.pop();
    reverseStack(s);
    insetAtButtom(s, temp);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    reverseStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
