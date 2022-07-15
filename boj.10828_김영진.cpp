#include <iostream>
#include <stack>

using namespace std;
int main()
{
    int N;
    stack<int> stack;
    cin >> N;

    string str;
    for (int i; i<N; i++){
        cin >> str;
        if (str=="push") {
            int num;
            cin >> num;
            stack.push(num);
        }
        else if (str=="pop"){
            if (!stack.empty()){
                cout << stack.top() << endl;
                stack.pop();
            }
            else cout << "-1" << endl;
        }
        else if (str=="size"){
            cout << stack.size() << endl;
        }
        else if (str=="empty"){
            if (stack.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if (str=="top"){
            if (!stack.empty()){
                cout << stack.top() << endl;
            }
            else cout << "-1" << endl;
        }
    }

    return 0;

}