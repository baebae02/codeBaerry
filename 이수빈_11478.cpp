#include <iostream>
#include <set>

using namespace std;

int main(){
    string str, temp;
    int num, size = 1;
    set<string> s;

    cin >> str;
    for(int i = 0; i<str.size(); i++){
        for(int j = 0; j<str.size(); j++){
            temp = str.substr(j, size);
            s.insert(temp);
            if(str.size()-(j+1) < size) break;
        }
        size++;
    }
    cout << s.size();
}
