// 최소힙
#include <iostream>
#include <string>
#include <queue>

using namespace std;
int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, num;
    cin >> N;

    priority_queue<int> q;

    for (int i=0; i < N; i++){
        cin >> num;
        if (num > 0) { // 자연수이면
            q.push(num);
        } else if (num == 0) {
            if (q.empty()) cout << "0\n";
            else {
                cout << q.top() << '\n';
                q.pop();
            }
        }
    }

}