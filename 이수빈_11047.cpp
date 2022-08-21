#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, K;
    int count = 0;
    vector<int> v;
    
    cin >> N >> K;

    for(int i = 0; i<N; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    for(int i = N-1; i>=0; i--){
        if(v[i] > K) continue;
        count += K / v[i];
        K %= v[i];
    }

    cout << count;
}
