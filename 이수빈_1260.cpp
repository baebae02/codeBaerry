#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1001

using namespace std;

vector<int> v[MAX];
bool visited[MAX];

void dfs(int startNode){
    visited[startNode] = true;
    cout << startNode << " ";

    for(int i = 0; i<v[startNode].size(); i++){
        int next = v[startNode][i];
        if(!visited[next]){
            dfs(next);
        }
    }
}

void bfs(int startNode){
    queue<int> q;
    q.push(startNode);
    visited[startNode] = true;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        
        for(int i = 0; i<v[cur].size(); i++){
            int next = v[cur][i];
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
            }
        }
    }

}

int main(){
    int N, M, V;
    int x, y;

    cin >> N >> M >> V;

    for(int i = 0; i<M; i++){
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (int i = 1; i <= N; i++) sort(v[i].begin(), v[i].end());
    
    dfs(V);

    for(int i = 0; i<=N; i++) visited[i] = false;

    cout << "\n";
    bfs(V);
}
