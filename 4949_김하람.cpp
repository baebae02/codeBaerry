#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main() {
   
   while(true){
       string input;
       getline(cin, input);
       if(input == ".") break;
       
       stack<char> s;
       bool isBalanced = 0;
       for(int i=0; i<input.length(); i++){
           char bracket = input[i];

           if((bracket == '(') || (bracket == '[')) s.push(bracket);
           else if (bracket == ')'){
               if(!s.empty() && s.top() == '(') s.pop();
               else{
                   isBalanced = 1;
                   break;
               }
           }
           else if (bracket == ']'){
               if(!s.empty() && s.top() == '[') s.pop();
               else {
                   isBalanced = 1;
                   break;
               }
           }
       }

       if(isBalanced == 0 && s.empty()) cout << "yes" << "\n";
       else cout << "no" << "\n";

       
   }


}
