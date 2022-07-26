//µË∫∏¿‚
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int N, M;
    set<string> s;
    set<string> re;
    cin >> N >> M;
    cin.ignore();

    for (int i=0; i<N; i++){
        string name;
        cin >> name;
        s.insert(name);
    }
    for (int i=0; i<M; i++){
        string name;
        cin >> name;
        if (s.find(name)!=s.end()){
            re.insert(name);
        }
    }

    int size;
    size = re.size();
    cout << size << endl;
    for (auto i : re) cout << i << endl;

    return 0;
}