// 220711
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){

    while(true){
        string str;
        string isBalanced = "yes";
        stack<char> s;

        getline(cin, str);
        if(str == ".") break;
        for(int i = 0; i<str.length(); i++){
            if(str[i] == '[') s.push(str[i]);
            else if(str[i] == '(') s.push(str[i]);
            else if(str[i] == ']'){
                if(!s.empty() && s.top() == '[') s.pop(); // if문 안에 순서 바꾸니까 실행 됨..
                else {
                    isBalanced = "no";
                    break;
                }
            }
            else if(str[i] == ')'){
                if(!s.empty() && s.top() == '(') s.pop();
                else {
                    isBalanced = "no";
                    break;
                }
            }
            if(str[i] == '.') break;
        }
        if(s.empty() && isBalanced == "yes") cout << "yes\n";
        else cout << "no\n";
    }
        

}
