#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "[({})]]";
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char top = st.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    cout << "Invalid parenthesis" << endl;
                    return 0; 
                }
            }
            else
            {
                cout << "Invalid parenthesis" << endl;
                return 0; 
            }
        }
    }

    if (st.empty())
    {
        cout << "Valid parenthesis" << endl;
    }
    else
    {
        cout << "Invalid parenthesis" << endl;
    }
    return 0;
}
