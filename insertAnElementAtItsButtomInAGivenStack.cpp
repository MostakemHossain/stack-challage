#include <bits/stdc++.h>
using namespace std;

void pushToBottom(stack<char> &s, char x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    char topElement = s.top();
    s.pop();
    pushToBottom(s, x);
    s.push(topElement);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack<char> s;
    s.push('3');
    s.push('2');
    s.push('1');

    char x = '5';
    pushToBottom(s, x);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
