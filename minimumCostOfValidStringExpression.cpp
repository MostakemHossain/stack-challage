#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str = "{{{}";
    int n = str.size();
    if (n % 2 == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    stack<char> s;
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];

        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    int a = 0;
    int b = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }
    cout << (a + 1) / 2 + (b + 1) / 2 << endl;
}
