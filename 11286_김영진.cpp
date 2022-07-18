// 절대값 힙

#include <queue>
#include <cmath>

using namespace std;
int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, num;
    cin >> N;

    priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > q;

    for (int i=0; i < N; i++){
        cin >> num;
        if (num != 0) { // 0이 아닌 정수이면
            q.push({abs(num), num});
        } else if (num == 0) {
            if (q.empty()) cout << "0\n";
            else {
                cout << q.top().second << '\n';
                q.pop();
            }
        }
    }
}