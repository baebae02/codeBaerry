// 220715
#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

int main(){
    cin.tie(NULL); // 시간초과 없애기 위해
    ios_base::sync_with_stdio(false); // 시간초과 없애기 위해

    int N, temp;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    // first - 절댓값, second - 실제값 / first 기준으로 정렬 후 값 같으면 second 비교

    cin >> N;

    for(int i = 0; i<N; i++){
        cin >> temp;
        if(temp == 0){
            if(q.empty()) {
                cout << "0\n";
                continue;
            }
            else {
                cout << q.top().second << "\n";
                q.pop();
            }
        }
        else{
            q.push({abs(temp), temp});
        }
    }

}
