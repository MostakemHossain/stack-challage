#include <bits/stdc++.h>
using namespace std;

void solve(stack<char> &st, int count, int s)
{
    // base case
    if (count == s / 2)
    {
        st.pop();
        return;
    }
    int num = st.top();
    st.pop();

    // recursive call
    solve(st, count + 1, s);
    st.push(num);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack<char> st;
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st.push('5');
    int count = 0;
    solve(st, count, st.size());
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
