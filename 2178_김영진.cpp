#include <iostream>
#include <queue>

using namespace std;

int N, M;
int dx[] = {-1, 1, 0, 0}; // 좌, 우, 상, 하
int dy[] = {0, 0, -1, 1};

void BFS(int G[101][101]) {
    // 시작 : maze[0][0]
    // 끝   : maze[N-1][M-1]
    int isMarked[101 * 101] = {false};
    int isinQueue[101 * 101] = {false};
    
    queue<pair<int, int> > q;
    q.push(make_pair(0, 0));
    
    while(!q.empty()) {
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++) {
            int nx = cur_x + dx[i];
            int ny = cur_y + dy[i];
            
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(G[nx][ny] == 0) continue;
            if(G[nx][ny] == 1) {
                G[nx][ny] = G[cur_x][cur_y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
    cout << G[N - 1][M - 1];
}

int main()
{
    cin >> N >> M;
    int maze[101][101] = {0};
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%1d", &maze[i][j]);
        }
    }
    
    BFS(maze);

    return 0;
}
