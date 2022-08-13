#include <iostream>
#include <vector>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M, temp, sumTemp=0;
    vector<int> sum;

    cin >> N >> M;

    for(int i = 0; i<N; i++){
        cin >> temp;
        sumTemp += temp;
        sum.push_back(sumTemp);
    }

    for(int i = 0; i<M; i++){
        int j, k;
        cin >> j >> k;
        cout << sum[k-1] - sum[j-2] << "\n";
    }
}
