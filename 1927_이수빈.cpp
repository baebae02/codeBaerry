// 220715
#include <iostream>
#include <queue>

using namespace std;

int main(){
    cin.tie(NULL); // 시간초과 없애기 위해
    ios_base::sync_with_stdio(false); // 시간초과 없애기 위해

    int N, temp;
    priority_queue<int, vector<int>, greater<int>> q;

    cin >> N;

    for(int i = 0; i<N; i++){
        cin >> temp;
        if(temp == 0){
            if(q.empty()) {
                cout << "0\n";
                continue;
            }
            else {
                cout << q.top() << "\n";
                q.pop();
            }
        }
        else{
            q.push(temp);
        }
    }

}
