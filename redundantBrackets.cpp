#include <bits/stdc++.h>
using namespace std;

bool hasRedundantBrackets(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else
        {
            if (s[i] == ')')
            {
                bool isRedundant = true;
                while (st.top() != '(')
                {
                    if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if (isRedundant == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s = "((a+b))";

    if (hasRedundantBrackets(s))
    {
        cout << "The expression has redundant brackets." << endl;
    }
    else
    {
        cout << "The expression does not have redundant brackets." << endl;
    }

    return 0;
}
