#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    stack<int> st;
    string input;

    for (int i = 0; i < N; i++)
    {
        cin >> input;

        if (input == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if (input == "pop")
        {
            if (!st.empty())
            {
                cout << st.top() << "\n";
                st.pop();
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else if (input == "size")
        {
            cout << st.size() << "\n";
        }
        else if (input == "empty")
        {
            if (st.empty())
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if (input == "top")
        {
            if (!st.empty())
            {
                cout << st.top() << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
    }
    return 0;
}