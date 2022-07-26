//문자열 집합
#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;
int main() {
    int N, M;
    set<string> s;
    int sum=0;
    
    cin >> N >> M;
    cin.ignore();

    for (int i=0; i<N; i++){
        string word;

        cin >> word;
        s.insert(word);
    }
    for (int i=0; i<M; i++){
        string word;
        
        cin >> word;
        if (s.find(word)!=s.end()) sum++;
    }
    cout << sum;
    
    return 0;
}