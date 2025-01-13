#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &s, int num)
{

    if (s.empty() || s.top() < num)
    {
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();

    sortedInsert(s, num);

    s.push(n);
}

void solve(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int n = s.top();
    s.pop();
    solve(s);

    sortedInsert(s, n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);

    solve(s);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
