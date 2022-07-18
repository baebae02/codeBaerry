/* 중간값 찾기
- 두 개의 우선순위 큐를 사용한다.
- 만약, 그동안 백준이가 외친 수의 개수가 짝수개라면 중간에 있는 두 수 중에서 작은 수를 말해야 한다.
< 규칙 1 > 모든 최대 힙의 크기는 항상 최소 힙의 크기와 같거나 1만큼 크다.
< 규칙 2 > 최소힙의 모든 원소는 최대힙의 모든 원소보다 항상 크거나 같아야 한다. 즉, 최소힙의 top값은 최대힙의 top값보다 크거나 같다.
==> 만약, 규칙 2가 성립하지 않는다면 최소힙의 top과 최대힙의 top을 바꿔주어야 한다.
*/

#include <iostream>
#include <string>
#include <queue>

using namespace std;
int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, num;
    cin >> N;

    priority_queue< int > max_h; // 내림차순
    priority_queue< int, vector<int>, greater<int> > min_h; // 오름차순

    for (int i=0; i<N; i++) {
        cin >> num;
        if (max_h.empty() && min_h.empty()) max_h.push(num);
        else {
            if (max_h.size()==min_h.size()) {
                max_h.push(num);
                if (max_h.top()>min_h.top()) {
                    int a = max_h.top(); int b = min_h.top();
                    max_h.pop(); min_h.pop();
                    max_h.push(b); min_h.push(a);
                }
            } else {
                min_h.push(num);
                if (max_h.top()>min_h.top()) {
                    int a = max_h.top(); int b = min_h.top();
                    max_h.pop(); min_h.pop();
                    max_h.push(b); min_h.push(a);
                }
            }
        }
        cout<<max_h.top()<<'\n';
    }
}