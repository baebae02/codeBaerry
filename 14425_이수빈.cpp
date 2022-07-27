#include <iostream>
#include <set>

using namespace std;

int main(){
    set<string> s;
    int N, M, result = 0;
    string temp;

    cin >> N >> M;

    for(int i = 0; i<N; i++){
        cin >> temp;
        s.insert(temp);
    }
    for(int i = 0; i<M; i++){
        cin >> temp;
        if(s.find(temp) != s.end()){
            result++;
        }
    }
    cout << result;
}
