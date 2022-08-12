#include <iostream>
#include <queue>
using namespace std;
#define MAX 1001
 
int N, M, V;
int map[MAX][MAX];
bool visited[MAX];
queue<int> q;
 
void reset() {
    for (int i = 1; i <= N; i++) {
        visited[i] = 0;
    }
}
 
void DFS(int x) {
    visited[x] = true;
    cout << x << " ";
    
    for (int i = 1; i <= N; i++) {
        if (map[x][i] == 1 && visited[i] == 0) { //현재 정점과 연결되어있고 방문되지 않았으면
            DFS(i);
        }
    }
}
 
void BFS(int x) {
    q.push(x);
    visited[x] = true;
    cout << x << " ";
 
    while (!q.empty()) {
        x = q.front();
        q.pop();
        
        for (int w = 1; w <= N; w++) {
            if (map[x][w] == 1 && visited[w] == 0) { //현재 정점과 연결되어있고 방문되지 않았으면
                q.push(w);
                visited[w] = true;
                cout << w << " ";
            }
        }
    }
}
 
int main() {
    cin >> N >> M >> V;
 
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
 
    reset();
    DFS(V);
    
    cout << '\n';
    
    reset();
    BFS(V);
 
    return 0;
}
