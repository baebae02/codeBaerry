#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M, result=0;
    string temp;
    set<string> s;
    vector<string> v;

    cin >> N >> M;
    for(int i = 0; i<N; i++){
        cin >> temp;
        s.insert(temp);
    }
    for(int i = 0; i<M; i++){
        cin >> temp;
        if(s.find(temp) != s.end()){
            result++;
            v.push_back(temp);
        }
    }
    sort(v.begin(), v.end());
    cout << result << "\n";
    for(int i = 0; i<result; i++){
        cout << v[i] << "\n";
    }
}
