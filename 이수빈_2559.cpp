#include <iostream>
#include <vector>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, K;
    int max = 0;
    int temp, sumTemp = 0;
    vector<int> sum;

    cin >> N >> K;

    for(int i = 0; i<N; i++){
        cin >> temp;
        sumTemp += temp;
        sum.push_back(sumTemp);
    }

    max = sum[K-1];

    for(int i = K; i<N; i++){
        temp = sum[i] - sum[i-K];
        if(temp >= max) max = temp;
    }

    cout << max;

}
