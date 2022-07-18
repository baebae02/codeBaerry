#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    priority_queue<int> q;
    cin >> N;

    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        if( x == 0 ) {
            if(q.empty())   cout << "0" << "\n";
            else{
                cout << q.top() << "\n";
                q.pop();
            }
        } else {
            q.push(x);
        }
    }
}
