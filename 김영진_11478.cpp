// ���� �ٸ� �κ� ���ڿ��� ����
#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;
// ���ڿ� �ڸ���
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