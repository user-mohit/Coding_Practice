#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    int n = s.size();
    bool ans = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (!st.empty() && s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (!st.empty() && s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (!st.empty() && s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    if (!st.empty()) // Check if the stack is not empty after processing the entire string
    {
        ans = false;
    }

    return ans;
}

int main()
{

    string s = "{[()]}";

    if (isValid(s))
    {
        cout << "The given string is valid." << endl;
    }
    else
    {
        cout << "The given string is not valid." << endl;
    }

    return 0;
}
