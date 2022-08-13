#include <iostream>
#include <vector>
#define MAX 100001

using namespace std;

int result[MAX];
bool visited[MAX];
vector<int> v[MAX];

void dfs(int num){
    visited[num] = true;
    for(int i = 0; i<v[num].size(); i++){
        int next = v[num][i];
        if(!visited[next]){
            result[next] = num;
            dfs(next);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    int x, y;

    cin >> N;

    for(int i = 0; i<N-1; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1);

    for(int i = 2; i<=N; i++){
        cout << result[i] << "\n";
    }
}
