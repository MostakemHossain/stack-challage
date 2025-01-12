#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string sk = "abcde";
    stack<char> s;
    for (int i = 0; i < sk.size(); i++)
    {
        s.push(sk[i]);
    }
    string ans = "";
    while (!s.empty())
    {
        ans += s.top();
        s.pop();
    }
    cout << ans << endl;
    return 0;
}
