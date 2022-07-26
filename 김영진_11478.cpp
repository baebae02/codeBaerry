// 서로 다른 부분 문자열의 개수
#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;
// 문자열 자르기
// string substr (size_t pos = 0, size_t len = npos) const;
int main() {
    string word;
    cin >> word;
    set<string> s;
    
    for (int i=0; i<word.length(); i++){
        for (int j=1; j<word.length()+1; j++){
            string sub = word.substr(i, j);
            s.insert(sub);
        }
    }

    cout << s.size();
    return 0;
}